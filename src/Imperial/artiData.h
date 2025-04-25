#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "attrData.h"
namespace {
    using std::vector;
    using std::string;
}

struct artiData {
    artiData (string n, int r, attrData attr1, attrData attr2, attrData attr3)
        : name(n), rarity(r), attribute1(attr1), attribute2(attr2), attribute3(attr3) {
    }
    string name;
    int rarity;
    attrData attribute1;
    attrData attribute2;
    attrData attribute3;
};

inline vector<artiData> artiList () {
    return {
        artiData("Ophestra's Bless", 5, attrData("ATK", 0.152), attrData("HP", 0.466), attrData("DEF", 0.128)),
        artiData("Infernal Flame", 5, attrData("ATK", 0.466), attrData("HP", 0.078), attrData("DEF", 0.108)),
        artiData("Celestial Goblet", 5, attrData("CD", 0.288), attrData("CR", 0.128), attrData("DEF", 0.058)),
        artiData("Abyssal Crown", 5, attrData("ATK", 0.466), attrData("HP", 0.118), attrData("CD", 0.108))
    };
}