#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "attrData.h"
#include "charData.h"
#include "weapData.h"
#include "artiData.h"
namespace {
    using std::vector;
    using std::string;
    using std::cout;
    using std::endl;
}

void showCharInfo (charData &char1) {
    cout << endl;
    cout << "Name: " << char1.name << endl;
    cout << "Rarity: " << char1.rarity << endl;
    cout << "Base HP: " << char1.baseHP << endl;
    cout << "Base ATK: " << char1.baseATK << endl;
    cout << "Base DEF: " << char1.baseDEF << endl;
    cout << "Base Crit Rate: " << char1.baseCritRate * 100 << "%" << endl;
    cout << "Base Crit Damage: " << char1.baseCritDamage * 100 << "%" << endl;
}

void showWeapInfo (weapData &weap1) {
    cout << endl;
    cout << "Name: " << weap1.name << endl;
    cout << "Rarity: " << weap1.rarity << endl;
    cout << "Base ATK: " << weap1.baseATK << endl;
    cout << "Attribute 1: " << weap1.attribute1.name << ": " << weap1.attribute1.scale * 100 << "%" << endl;
}

void showArtifactInfo (artiData &arti1) {
    cout << endl;
    cout << "Name: " << arti1.name << endl;
    cout << "Rarity: " << arti1.rarity << endl;
    cout << "Attribute 1: " << arti1.attribute1.name << ": " << arti1.attribute1.scale * 100 << "%" << endl;
    cout << "Attribute 2: " << arti1.attribute2.name << ": " << arti1.attribute2.scale * 100 << "%" << endl;
    cout << "Attribute 3: " << arti1.attribute3.name << ": " << arti1.attribute3.scale * 100 << "%" << endl;
}