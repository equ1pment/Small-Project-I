#pragma once

#include <iostream>
#include <string>
#include <vector>
namespace {
    using std::vector;
    using std::string;
}

struct attrData {
    attrData (string n, float s) {
        name = n;
        scale = s;
    } 
    string name;
    float scale;
};

inline vector<attrData> attrList () {
    return {
        attrData("HP", 0.1),
        attrData("ATK", 0.1),
        attrData("DEF", 0.1),
        attrData("CR", 0.05),
        attrData("CD", 0.05)
    };
}