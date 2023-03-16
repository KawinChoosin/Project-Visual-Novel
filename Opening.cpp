#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

#define dialogOutOpn for(auto i = dialogOpn.begin(); i != dialogOpn.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutOpn2 for(auto i = dialogOpn2.begin(); i != dialogOpn2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutOpn3 for(auto i = dialogOpn3.begin(); i != dialogOpn3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowOpn for(auto i = dialogOpn.begin(); i != dialogOpn.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา.

vector<string> dialogOpn;
vector<string> dialogOpn2;
vector<string> dialogOpn3;

void pressEnters(){ // กด Enter เปลี่ยนฉาก
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");
}

void Opening(){ // ฉากเปิด
    system("cls");
    dialogOpn3.push_back("*****************************************************************\n");
    dialogOpn.push_back("   In the Kingdom of Crystonia, there are 'Crystals of Soul'\nwhich was created by five sorcerers. They are sources of spirits of\nall livings in the kingdom. The Crystals of Soul, which are keep the\nkingdom at peace and unity, were stored in the Mountain of Spirits.\n");
    dialogOpn2.push_back("\n*****************************************************************\n");
    dialogOutOpn3;
    dialogOutSlowOpn;
    dialogOutOpn2;
    dialogOpn3.push_back("   In the Kingdom of Crystonia, there are 'Crystals of Soul'\nwhich was created by five sorcerers. They are sources of spirits of\nall livings in the kingdom. The Crystals of Soul, which are keep the\nkingdom at peace and unity, were stored in the Mountain of Spirits.\n");
    dialogOpn.clear();
    pressEnters();//กด Enter เปลี่ยนฉาก
    dialogOpn.push_back("\n   The Crystals of Soul is consist of five crystals:\n- Aventurine: Crystal of Opportunity\n- Rose Quartz: Crystal of Forgiveness and Love\n- Sodalite: Crystal of Logic\n- Fluorite: Crystal of Wisdom\n- Amethyst: Crystal of Purity\n");
    dialogOutOpn3;
    dialogOutSlowOpn;
    dialogOutOpn2;
    dialogOpn3.push_back("\n   The Crystals of Soul is consist of five crystals:\n- Aventurine: Crystal of Opportunity\n- Rose Quartz: Crystal of Forgiveness and Love\n- Sodalite: Crystal of Logic\n- Fluorite: Crystal of Wisdom\n- Amethyst: Crystal of Purity\n");
    dialogOpn.clear();
    pressEnters();//กด Enter เปลี่ยนฉาก
    dialogOpn.push_back("\n   But one day, the dragon came and stole the\ngem by magic, making the you who are the\nguard and various animals pass out.\n");
    dialogOutOpn3;
    dialogOutSlowOpn;
    dialogOutOpn2;
    dialogOpn3.push_back("\n   But one day, the dragon came and stole the\ngem by magic, making the you who are the\nguard and various animals pass out.\n");
    dialogOpn.clear();
    pressEnters();//กด Enter เปลี่ยนฉาก
    dialogOpn.push_back("\n   Now, the dragon has stored five crystals in\neach town of the dragon subordinate. You\nmust try your best to retrieve crystal as soon\nas possible. Because the crystals should be\nstored in the Mountain of Spirits, or otherwise\nthe Kingdom of Crystonia will be cursed and\nin chaos.\n\nChoose the path you think which is the best.\n");
    dialogOutOpn3;
    dialogOutSlowOpn;
    dialogOutOpn2;
    pressEnters();//กด Enter เปลี่ยนฉาก
}