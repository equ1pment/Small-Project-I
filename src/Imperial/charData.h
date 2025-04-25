#pragma once

#include <iostream>
#include <string>
#include <vector>
namespace {
    using std::vector;
    using std::string;
}

struct charData {
    charData (string n, int r, int bHP, int bATK, int bDEF, float bCR, float bCD) {
        name = n;
        rarity = r;
        baseHP = bHP;
        baseATK = bATK;
        baseDEF = bDEF;
        baseCritRate = bCR;
        baseCritDamage = bCD;
    }
    string name;
    int rarity;
    int baseHP;
    int baseATK;
    int baseDEF;
    float baseCritRate;
    float baseCritDamage;
};

inline vector<charData> charList () {
    return {
        charData("Yomi", 5, 2088, 324, 168, 0.05, 0.5),
        charData("Odin", 5, 2644, 361, 134, 0.05, 0.75),
        charData("Athena", 5, 2511, 352, 171, 0.05, 0.5)
    };
}