#include <iostream>
#include <algorithm>
#include "chooseThings.h"
#include "finalizeAttributes.h"
#include <limits>
namespace {
    using std::cin;
    using std::cout;
    using std::endl;
    using std::vector;
    using std::numeric_limits;
    using std::streamsize;
}

void getCharData (vector<charData> &charArr) {
    charArr = charList();
}

void getWeapData (vector<weapData> &weapArr) {
    weapArr = weapList();
}

void getArtiData (vector<artiData> &artiArr) {
    artiArr = artiList();
}

int main () {
    vector<charData> charArr;
    getCharData(charArr);
    vector<weapData> weapArr;
    getWeapData(weapArr);
    vector<artiData> artiArr;
    getArtiData(artiArr);
    charData char1 = chooseCharToShowInfoOrConfirm(charArr); cout << endl;
    weapData weap1 = chooseWeapToShowOrConfirm(weapArr); cout << endl;
    artiData arti1 = chooseArtiToShowInfoOrConfirm(artiArr); cout << endl;
    finalStats stats = calculateFinalStats(char1, weap1, arti1);
    cout << "Final Stats:" << endl;
    cout << "HP: " << stats.HP << endl;
    cout << "ATK: " << stats.ATK << endl;
    cout << "DEF: " << stats.DEF << endl;
    cout << "Crit Rate: " << stats.critRate * 100 << "%" << endl;
    cout << "Crit Damage: " << stats.critDamage * 100 << "%" << endl;
    return 0;
}