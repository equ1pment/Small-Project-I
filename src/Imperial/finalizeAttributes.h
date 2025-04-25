#include <iostream>
#include <vector>
#include "charData.h"
#include "weapData.h"
#include "artiData.h"
#include "attrData.h"

struct finalStats {
    int HP;
    int ATK;
    int DEF;
    float critRate;
    float critDamage;
};

finalStats calculateFinalStats(const charData& character, const weapData& weapon, const artiData& artifact) {
    finalStats stats;

    float hpScale = 0.0f, atkScale = 0.0f, defScale = 0.0f, crScale = 0.0f, cdScale = 0.0f;

    // Thuộc tính từ vũ khí
    if (weapon.attribute1.name == "HP") hpScale += weapon.attribute1.scale;
    else if (weapon.attribute1.name == "ATK") atkScale += weapon.attribute1.scale;
    else if (weapon.attribute1.name == "DEF") defScale += weapon.attribute1.scale;
    else if (weapon.attribute1.name == "CR") crScale += weapon.attribute1.scale;
    else if (weapon.attribute1.name == "CD") cdScale += weapon.attribute1.scale;

    // Thuộc tính từ artifact
    vector<attrData> artiAttrs = { artifact.attribute1, artifact.attribute2, artifact.attribute3 };
    for (const auto& attr : artiAttrs) {
        if (attr.name == "HP") hpScale += attr.scale;
        else if (attr.name == "ATK") atkScale += attr.scale;
        else if (attr.name == "DEF") defScale += attr.scale;
        else if (attr.name == "CR") crScale += attr.scale;
        else if (attr.name == "CD") cdScale += attr.scale;
    }

    // Tính toán
    stats.HP = character.baseHP * (1 + hpScale);
    stats.ATK = (weapon.baseATK + character.baseATK) * (1 + atkScale);
    stats.DEF = character.baseDEF * (1 + defScale);
    stats.critRate = character.baseCritRate + crScale;
    stats.critDamage = character.baseCritDamage + cdScale;

    return stats;
}