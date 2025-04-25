#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "charData.h"
#include "weapData.h"
#include "artiData.h"
#include "showInfo.h"
namespace {
    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;
    using std::endl;
    using std::numeric_limits;
    using std::streamsize;
    using std::exit;
}

charData chooseCharToShowInfoOrConfirm (vector<charData> &charArr) {
    while (true)
        {
            cout << "Choose a character to show info and confirm" << endl;
            for (int i = 0; i < charArr.size(); i++) {
                cout << i + 1 << ". " << charArr[i].name << endl;
            }
            cout << "0. Exit" << endl << endl;
            int choice;
            cin >> choice;
            if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a number." << endl << endl;
                    continue;
                }
            if (choice < 0 || choice > charArr.size())
                {
                    cout << "Invalid choice. Please try again." << endl << endl;
                    continue;
                }
            if (choice == 0)
                {
                    cout << "Exiting..." << endl;
                    exit(0);
                }
            else
                {
                    showCharInfo(charArr[choice - 1]); cout << endl;
                    cout << "Confirm? (Y/N)" << endl << endl;
                    char confirm;
                    cin >> confirm;
                    if (confirm == 'Y' || confirm == 'y')
                        {
                            cout << "Confirmed!" << endl;
                            return charData(charArr[choice - 1].name, charArr[choice - 1].rarity, charArr[choice - 1].baseHP, charArr[choice - 1].baseATK, charArr[choice - 1].baseDEF, charArr[choice - 1].baseCritRate, charArr[choice - 1].baseCritDamage);
                            break;
                        }
                    else if (confirm == 'N' || confirm == 'n')
                        {
                            cout << "Not confirmed." << endl << endl;
                            continue;
                        }
                    else
                        {
                            cout << "Invalid input. Please enter Y or N." << endl << endl;
                            continue;
                        }
                }
        }
}

weapData chooseWeapToShowOrConfirm (vector<weapData> &weapArr) {
    while (true)
        {
            cout << "Choose a weapon to show info and confirm" << endl;
            for (int i = 0; i < weapArr.size(); i++) {
                cout << i + 1 << ". " << weapArr[i].name << endl;
            }
            cout << "0. Exit" << endl << endl;
            int choice;
            cin >> choice;
            if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a number." << endl << endl;
                    continue;
                }
            if (choice < 0 || choice > weapArr.size())
                {
                    cout << "Invalid choice. Please try again." << endl << endl;
                    continue;
                }
            if (choice == 0)
                {
                    cout << "Exiting..." << endl;
                    exit(0);
                }
            else
                {
                    showWeapInfo(weapArr[choice - 1]); cout << endl;
                    cout << "Confirm? (Y/N)" << endl << endl;
                    char confirm;
                    cin >> confirm;
                    if (confirm == 'Y' || confirm == 'y')
                        {
                            cout << "Confirmed!" << endl << endl;
                            return weapData(weapArr[choice - 1].name, weapArr[choice - 1].rarity, weapArr[choice - 1].baseATK, weapArr[choice - 1].attribute1);
                            break;
                        }
                    else if (confirm == 'N' || confirm == 'n')
                        {
                            cout << "Not confirmed." << endl << endl;
                            continue;
                        }
                    else
                        {
                            cout << "Invalid input. Please enter Y or N." << endl << endl;
                            continue;
                        }
                }
        }
}

artiData chooseArtiToShowInfoOrConfirm (vector<artiData> &artiArr) {
    while (true)
        {
            cout << "Choose an artifact to show info and confirm" << endl;
            for (int i = 0; i < artiArr.size(); i++) {
                cout << i + 1 << ". " << artiArr[i].name << endl;
            }
            cout << "0. Exit" << endl << endl;
            int choice;
            cin >> choice;
            if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input. Please enter a number." << endl << endl;
                    continue;
                }
            if (choice < 0 || choice > artiArr.size())
                {
                    cout << "Invalid choice. Please try again." << endl << endl;
                    continue;
                }
            if (choice == 0)
                {
                    cout << "Exiting..." << endl;
                    exit(0);
                }
            else
                {
                    showArtifactInfo(artiArr[choice - 1]); cout << endl;
                    cout << "Confirm? (Y/N)" << endl << endl;
                    char confirm;
                    cin >> confirm;
                    if (confirm == 'Y' || confirm == 'y')
                        {
                            cout << "Confirmed!" << endl << endl;
                            return artiData(artiArr[choice - 1].name, artiArr[choice - 1].rarity, artiArr[choice - 1].attribute1, artiArr[choice - 1].attribute2, artiArr[choice - 1].attribute3);
                            break;
                        }
                    else if (confirm == 'N' || confirm == 'n')
                        {
                            cout << "Not confirmed." << endl << endl;
                            continue;
                        }
                    else
                        {
                            cout << "Invalid input. Please enter Y or N." << endl << endl;
                            continue;
                        }
                }
        }
}