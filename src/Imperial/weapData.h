#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "attrData.h"
namespace {
    using std::vector;
    using std::string;
}

struct weapData {
    weapData (string n, int r, int bATK, attrData attr1)
        : name(n), rarity(r), baseATK(bATK), attribute1(attr1) {
    }
    string name;
    int rarity;
    int baseATK;
    attrData attribute1;
};

inline vector<weapData> weapList () {
    return {
        weapData("Taihaisekai", 5, 608, attrData("ATK", 0.466)),
        weapData("Scharnhorst", 5, 712, attrData("CD", 0.328)),
        weapData("The Verdict", 5, 786, attrData("CR", 0.144))
    };
}