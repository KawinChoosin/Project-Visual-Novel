#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

#define dialogOutAvn for(auto i = dialogAvn.begin(); i != dialogAvn.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutAvn2 for(auto i = dialogAvn2.begin(); i != dialogAvn2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutAvn3 for(auto i = dialogAvn3.begin(); i != dialogAvn3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowAvn for(auto i = dialogAvn.begin(); i != dialogAvn.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา.

vector<string> dialogAvn;
vector<string> dialogAvn2;
vector<string> dialogAvn3;

void pressEnterAvn(){ // กด Enter เปลี่ยนฉาก.
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");
}

void Summary(int &con, bool &aventurine){
    if(con == 1){
        pressEnterAvn();
        system("cls");
        dialogAvn.clear();
        dialogAvn2.clear();
        dialogAvn3.clear();
        aventurine = true;
        dialogAvn2.push_back("*****************************************************************\n");
        dialogAvn.push_back("   Within this city there are very beautiful old houses. There\nis a nature of trees that are lush green. It goes well with\ntraditional houses built of stone, merging with streams and small roads.\n");
        dialogAvn.push_back("\n   When the dwarfs know that you could cross the bridge, they\nare very happy. In the past, it was seen that the gap between\nbridges was very wide. But now, it's not wide anymore because you\nbelieved in your power. You destroyed the spell and helped the\ndwarfs to come out of the city\n");
        dialogAvn.push_back("\n   So they give you the Aventurine, the \"Crystal of opportunity\".\n");
        dialogAvn.push_back("\n   You get the Aventurine.\n");
        dialogAvn.push_back("\n   The Aventurine. Great for purification and opening the mind to\nnew possibilities, Aventurine can also boost creativity, calm the\nnerves before stressful situations, and ward off bad energies from\n\"psychic vampires\" in your life.\n");
        dialogAvn.push_back("\n   A whole town of dwarves come out to send you to the city\ngates with a gratefulness.\n");
        dialogAvn3.push_back("\n*****************************************************************\n");
        dialogOutAvn2;
        dialogOutSlowAvn;
        dialogOutAvn3;
    }
}

void Avn(int &hp, int &money, bool &aventurine){
    int answer, con;
    while(true){
        system("cls");
        dialogAvn3.push_back("*****************************************************************\n");
        dialogAvn.push_back("   In the middle of the day when the sun is very strong. As you\nwalk on a bridge across a river in front of one of the city gates\nand find that three of the timbers of the bridge were broken.\nUnderneath there\'s an open-mouthed crocodile waiting just where you\nstand. A light breeze blew and made the bridge sway back and forth.\n");
        dialogAvn2.push_back("\n*****************************************************************\n");
        dialogAvn2.push_back("-----------------------------------------------------------------\n");
        dialogAvn2.push_back("Do you think your legs are long enough to cross this gap of the bridge?\n\n");
        dialogAvn2.push_back("1) I think my legs are long enough to cross it for sure!\n\n2) I don't think my legs are long enough to cross it!\n");
        dialogAvn2.push_back("-----------------------------------------------------------------\n");
        dialogAvn2.push_back("Your Choice: ");
        dialogOutAvn3;
        dialogOutSlowAvn;
        dialogOutAvn2;
        dialogAvn3.push_back("   In the middle of the day when the sun is very strong. As you\nwalk on a bridge across a river in front of one of the city gates\nand find that three of the timbers of the bridge were broken.\nUnderneath there\'s an open-mouthed crocodile waiting just where you\nstand. A light breeze blew and made the bridge sway back and forth.\n");
        cin >> answer;
        if(answer == 1){
            system("cls");
            dialogAvn.clear();
            dialogAvn.push_back("\n   The river seems to be flowing faster.\n");
            dialogOutAvn3;
            dialogOutSlowAvn;
            dialogAvn3.insert(dialogAvn3.begin() + 2, "\n   The river seems to be flowing faster.\n");
            dialogAvn2.erase(dialogAvn2.begin() + 2, dialogAvn2.begin() + 4);
            dialogAvn2.insert(dialogAvn2.begin() + 2, "Do you think you'll fall in to the river?\n\n");
            dialogAvn2.insert(dialogAvn2.begin() + 3, "1) No, I don't think so.\n\n2) Yes, I think I'll fall in to the river. \n");
            dialogOutAvn2;
            cin >> answer;
            if(answer == 1){
                system("cls");
                dialogOutAvn3;
                dialogAvn.clear();
                dialogAvn2.erase(dialogAvn2.begin() + 2, dialogAvn2.begin() + 4);
                dialogAvn2.insert(dialogAvn2.begin() + 2, "Will you cross it?\n\n");
                dialogAvn2.insert(dialogAvn2.begin() + 3, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOutAvn2;
                cin >> answer;
                if(answer == 1){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided to cross it. You has successfully crossed. This is\nthe bridge that crosses to Bibury, where the dragon cast a magic\nspell that illustrates the distance of the broken bridge was large\nbut once you have jumped over, you will find that it's easy\nto cross, not that far.\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    dialogOutAvn2;
                    con = 1;
                    cin.ignore();
                    break;
                }else if(answer == 2){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided not to cross it. You stumble upon a stone on the\nwayside and fall into the river. Suddenly, a whole herd of\ncrocodiles is heading towards you. Both small and large crocodiles\nswim swiftly. The eyes stare at you with a fierce gaze as a\nprey. You tried to scramble up. Fortunately, in the end, you are\nable to make the climb in time.\n");
                    dialogAvn.push_back("\n   You are all soak, very tired and barely able to breathe. After\nyou sit down and rest until your tiredness is gone\n");
                    dialogAvn2.push_back("\n   You already missed something.\n");
                    dialogAvn2.push_back("\n   You continue the journey.\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    for (char c : "\n   Your HP: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    hp -= 1;
                    cout << hp;
                    for (char c : "(-1)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutAvn2;
                    cin.ignore();
                    break;
                }
            }else if(answer == 2){
                system("cls");
                dialogOutAvn3;
                dialogAvn.clear();
                dialogAvn2.erase(dialogAvn2.begin() + 2, dialogAvn2.begin() + 4);
                dialogAvn2.insert(dialogAvn2.begin() + 2, "Will you cross it?\n\n");
                dialogAvn2.insert(dialogAvn2.begin() + 3, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOutAvn2;
                cin >> answer;
                if(answer == 1){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n    You decided to cross it. At that moment, there is a strong\nwind blowing as you jumped. You lose your balance and stagger into the\nfence of the bridge until it almost falls, but you are still\nable to hold onto the fence firmly in time. So you can cross safely. \n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    dialogOutAvn2;
                    con = 1;
                    cin.ignore();
                    break;
                }else if(answer == 2){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided not to cross it. Then you walk along the riverbank.\n");
                    dialogAvn.push_back("\n   You continue the journey.\n");
                    dialogAvn.push_back("\n   You already missed something.\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    dialogOutAvn2;
                    cin.ignore();
                    break;
                }
            }
        }else if(answer == 2){
            system("cls");
            dialogAvn.clear();
            dialogAvn.push_back("\n   The river seems to be flowing faster.\n");
            dialogOutAvn3;
            dialogOutSlowAvn;
            dialogAvn3.insert(dialogAvn3.begin() + 2, "\n   The river seems to be flowing faster.\n");
            dialogAvn2.erase(dialogAvn2.begin() + 2, dialogAvn2.begin() + 4);
            dialogAvn2.insert(dialogAvn2.begin() + 2, "Do you think you'll fall in to the river?\n\n");
            dialogAvn2.insert(dialogAvn2.begin() + 3, "1) No, I don't think so.\n\n2) Yes, I think I'll fall in to the river. \n");
            dialogOutAvn2;
            cin >> answer;
            if(answer == 1){
                system("cls");
                dialogOutAvn3;
                dialogAvn.clear();
                dialogAvn2.erase(dialogAvn2.begin() + 2, dialogAvn2.begin() + 4);
                dialogAvn2.insert(dialogAvn2.begin() + 2, "Will you cross it?\n\n");
                dialogAvn2.insert(dialogAvn2.begin() + 3, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOutAvn2;
                cin >> answer;
                if(answer == 1){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided to cross it. You are very talented\nthat can cross the river It's not easy to get over it.\nThen you walk all the way to the end of the bridge\nand into the town of Bibury. Everything looks pretty\npetite including the entrance to the city as well.\n\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    dialogOutAvn2;
                    con = 1;
                    cin.ignore();
                    break;
                }else if(answer == 2){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided not to cross it. You stumble upon a stone on the\nwayside and fall into the river. Suddenly, a whole herd of crocodiles\nis heading towards you. Both small and large crocodiles swim swiftly.\nThe eyes stare at you with a fierce gaze as a prey. You tried to\nscramble up. Fortunately, in the end, you are able to make the \nclimb in time.\n");
                    dialogAvn2.push_back("\n   You already missed something.\n");
                    dialogAvn2.push_back("\n   You continue the journey.\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    for (char c : "\n   Your HP: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    hp -= 1;
                    cout << hp;
                    for (char c : "(-1)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutAvn2;
                    cin.ignore();
                    break;
                }
            }else if(answer == 2){
                system("cls");
                dialogOutAvn3;
                dialogAvn.clear();
                dialogAvn2.erase(dialogAvn2.begin() + 2, dialogAvn2.begin() + 4);
                dialogAvn2.insert(dialogAvn2.begin() + 2, "Will you cross it?\n\n");
                dialogAvn2.insert(dialogAvn2.begin() + 3, "1) Yes, I will.\n\n2) No, I won't.\n");
                dialogOutAvn2;
                cin >> answer;
                if(answer == 1){
                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided to cross it. You fall into the river but\nfortunately, you are not dead because those crocodiles are\njust statues that were created to be very realistic to\nprevent enemies that may attack people in the city\n");
                    dialogAvn.push_back("\n   At that moment when you are getting out of the river, two\ndwarfs in Bibury pass by on the banks of the riverbank. His hat\nis blown into the river near by you.\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogAvn2.push_back("-----------------------------------------------------------------\n");
                    dialogAvn2.push_back("Will you pick it back to them?\n\n");
                    dialogAvn2.push_back("1) Yes, I will.\n\n2) No, I won't.\n");
                    dialogAvn2.push_back("-----------------------------------------------------------------\n");
                    dialogAvn2.push_back("Your Choice: ");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    dialogOutAvn2;
                    cin >> answer;
                    if(answer == 1){
                        system("cls");
                        dialogAvn.clear();
                        dialogAvn2.clear();
                        dialogAvn.push_back("\n   You take it back to dwarf. They are so happy and give you money\nfor your kindness.\n");
                        dialogAvn2.push_back("\n   You already missed something.\n");
                        dialogAvn2.push_back("\n   You continue the journey.\n");
                        dialogAvn2.push_back("\n*****************************************************************\n");
                        money += 30;
                        dialogOutAvn3;
                        dialogOutSlowAvn;
                        for (char c : "\n   Your Coins: ") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        cout << money;
                        for (char c : "(+30)\n") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        dialogOutAvn2;
                        cin.ignore();
                        break;
                    }else if(answer == 2){
                        system("cls");
                        dialogAvn.clear();
                        dialogAvn2.clear();
                        dialogAvn.push_back("\n   You don\'t take it back to dwarf. Then they are angry and throw\na stone to you. So you have been injured.\n");
                        dialogAvn2.push_back("\n   You already missed something.\n");
                        dialogAvn2.push_back("\n   You continue the journey.\n");
                        dialogAvn2.push_back("\n*****************************************************************\n");
                        hp -= 2;
                        dialogOutAvn3;
                        dialogOutSlowAvn;
                        for (char c : "\n   Your HP: ") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        cout << hp;
                        for (char c : "(-2)\n") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        dialogOutAvn2;
                        cin.ignore();
                        break;
                        }
                }else if(answer == 2){

                    system("cls");
                    dialogAvn.clear();
                    dialogAvn2.clear();
                    dialogAvn.push_back("\n   You decided not to cross it. Then you walk along the riverbank.\n");
                    dialogAvn2.push_back("\n*****************************************************************\n");
                    dialogOutAvn3;
                    dialogOutSlowAvn;
                    dialogOutAvn2;
                    cin.ignore();
                    break;
                }
            }
        }
    }
    Summary(con, aventurine);
    pressEnterAvn();
}