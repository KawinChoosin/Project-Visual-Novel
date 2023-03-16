#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

#define dialogOutSdl for(auto i = dialogSdl.begin(); i != dialogSdl.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutSdl2 for(auto i = dialogSdl2.begin(); i != dialogSdl2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutSdl3 for(auto i = dialogSdl3.begin(); i != dialogSdl3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowSdl for(auto i = dialogSdl.begin(); i != dialogSdl.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา

vector<string> dialogSdl;
vector<string> dialogSdl2;
vector<string> dialogSdl3;

int bidding;
bool cut;

#define hpcheckSdl if(hp<=0){\
    pressEnterSdl();\
    playerLoseSdl();\
    pressEnterSdl();\
    break;\
    }\
 
#define moneycheckSdl if(money<0){\
    money=0;\
    }\

void playerLoseSdl(){
    cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*                   YOU LOSE!!!                       *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
}

void pressEnterSdl(){
    cout<<"Press Enter to continue...";
    cin.get();
    system("cls");
}

void Ifgoin(int &, int &, bool &, bool &);

void Sdl(int &hp, int &money, bool &sodalite, bool &vase){
    int answer;
    while(true){
        system("cls");
        dialogSdl3.push_back("*****************************************************************\n");
        dialogSdl.push_back("    In the twilight, the sun is about to set after a long\njourney. You pass by a town that looked quiet outside. No\n one is passing by and surrounding by large mountains.\nThere is only a dim torch light in front of the city gate. \n");
        dialogSdl2.push_back("\n*****************************************************************\n");
        dialogSdl2.push_back("-----------------------------------------------------------------\n");
        dialogSdl2.push_back("Are you going in? ");
        dialogSdl2.push_back("\n1) Yes.");
        dialogSdl2.push_back("\n2) No.\n");
        dialogSdl2.push_back("-----------------------------------------------------------------\n");
        dialogOutSdl3;
        dialogOutSlowSdl;
        dialogOutSdl2;
        dialogSdl2.erase(dialogSdl2.begin() + 2, dialogSdl2.begin() + 5);
        dialogSdl3.push_back("    In the twilight, the sun is about to set after a long\njourney. You pass by a town that looked quiet outside. No\n one is passing by and surrounding by large mountains.\nThere is only a dim torch light in front of the city gate.\n");
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.\n";
                continue;
            }break;
        }while(true);
        dialogSdl.clear();
        system("cls");
        if(answer==1){
            Ifgoin(hp, money, sodalite, vase);
        }else if(answer==2){
            dialogSdl.push_back("\n    At that moment, an old man passing by says to you, \"Inside there\nis the item you are looking for...\".\n");
            dialogSdl2.insert(dialogSdl2.begin() + 2, "Will you go back in?\n");
            dialogSdl2.insert(dialogSdl2.begin() + 3,"1) Yes.\n");
            dialogSdl2.insert(dialogSdl2.begin() + 4,"2) No.\n");
            dialogOutSdl3;
            dialogOutSlowSdl;
            dialogOutSdl2;
            dialogSdl3.push_back("\n    At that moment, an old man passing by says to you, \"Inside there\nis the item you are looking for...\".\n");
            do{
                cout<<"Your Choice: ";
                cin>>answer;
                if(answer!=1&&answer!=2){
                    cout<<"Wrong answer, Try again.\n";
                    continue;
                }break;
            }while(true);
            dialogSdl.clear();
            if(answer == 2){
                system("cls");
                dialogSdl.push_back("************************************\n");
                dialogSdl.push_back("You got nothing, just keep going.\n\n");
                dialogSdl.push_back("************************************\n");
                dialogOutSdl;
                cin.ignore();
                pressEnterSdl();
                break;
            }else if(answer == 1){
                dialogSdl.clear();
                system("cls");
                Ifgoin(hp, money, sodalite, vase);
            }
        }
        pressEnterSdl();
        dialogSdl.clear();
        dialogSdl2.clear();
        dialogSdl3.erase(dialogSdl3.begin() + 1, dialogSdl3.end());
        dialogSdl2.push_back("\n*****************************************************************\n");
            dialogSdl.push_back("    After the auction, everyone gradually left. But when you walk out,\nthere's no one to be found and all the lights in other stores go\n off. The manager has offered you to stay in the upstairs room of\nthe store. Will you accept the offer?\n");
        dialogSdl2.push_back("-----------------------------------------------------------------\n");
        dialogSdl2.push_back("Will you accept the offer?\n");
        dialogSdl2.push_back("1) Yes.\n");
        dialogSdl2.push_back("2) No.\n");
        dialogSdl2.push_back("-----------------------------------------------------------------\n");
        dialogOutSdl3;
        dialogOutSlowSdl;
        dialogOutSdl2;
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.\n";
                continue;
            }break;
        }while(true);
        dialogSdl3.push_back("    After the auction, everyone gradually left. But when you walk out,\nthere's no one to be found and all the lights in other stores go\noff. The manager has offered you to stay in the upstairs room of\nthe store. Will you accept the offer?\n");
        dialogSdl.clear();
        dialogSdl2.erase(dialogSdl2.begin() + 1, dialogSdl2.end());
        system("cls");
        if(answer == 1){
            dialogSdl.push_back("\n    You accept the offer and stay in a room on the second floor of\nthe tavern. The room is spacious and clean, with complete\nfacilities and bed sheets.\n");
            dialogOutSdl3;
            dialogOutSlowSdl;
            dialogOutSdl2;
            dialogSdl3.push_back("\n    You accept the offer and stay in a room on the second floor of\nthe tavern. The room is spacious and clean, with complete\nfacilities and bed sheets.\n");
            cin.ignore();
            pressEnterSdl();
            dialogOutSdl3;
            money-=10;//
            moneycheckSdl;
            hp-=1;//
            
            for (char c : "\n    You lose 10 coins \n\n    Your coins: ") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout<< money;
            for (char c : " (-10)\n") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            for (char c : "\n    You lose 1 hp \n\n    Your hp: ") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout<< hp;
            for (char c : " (-1)\n") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            dialogOutSdl2;
            hpcheckSdl;
            pressEnterSdl();
            cout<<"*****************************************************************\n";
            for (char c : "    In the morning, when you wake up, you feel tired, lack of sleep,\n dark eyes and exhausted. Then you leave the inn and go out the door.\n ") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout<<"\n*****************************************************************\n";
        }else if(answer==2){
            dialogSdl.push_back("\n    The whole city is in the dark and the gate is closed. So you\ncan only lie in front of the gate until the morning\n");
            dialogOutSdl3;
            dialogOutSlowSdl;
            dialogOutSdl2;
            dialogSdl3.push_back("\n    The whole city is in the dark and the gate is closed. So you\ncan only lie in front of the gate until the morning\n");
            cin.ignore();
            pressEnterSdl();
            dialogSdl.clear();
            dialogOutSdl3;
            hp-=1;//
            for (char c : "\n    You lose 1 hp \n\n    Your hp: ") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout<< hp;
            for (char c : " (-1)\n") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            dialogOutSdl2;
            hpcheckSdl;
            pressEnterSdl();
            cout<<"*****************************************************************\n";
            for (char c : "    In the morning, when you wake up, you feel tired, lack of sleep,\n dark eyes and exhausted. Then you leave the inn and go out the door.\n ") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout<<"\n*****************************************************************\n";
        }
        pressEnterSdl();
        cout<<"****************************************************************************\n";
        for (char c : "    However, when you look back, I realize that this city is a ghost town!\n") {
            cout << c;
            this_thread::sleep_for(chrono::milliseconds(50));
        }
        cout<<"\n****************************************************************************\n";
        pressEnterSdl();
        cout<<("*****************************************************************\n");
        for (char c : "\n              LET\'S CONTINUE THE JOURNEY ! \n\n") {
            cout << c;
            this_thread::sleep_for(chrono::milliseconds(50));
        }
        cout<<("*****************************************************************\n");
        pressEnterSdl();
        break;
    }
}

void Ifgoin(int &hp, int &money, bool &sodalite, bool &vase){
    int answer;
    dialogSdl.push_back("\n    You have arrived in Valhalla. Each house is starting to\nlight up. Then people begin to walk crowded. The atmosphere\nchanged quickly. You enter the inn and meet a Valkyrie.\nHe is a very wealthy jeweler and owned the place.\nHe has organized an auction. There are many participants\neating and drinking happily.\n");
            dialogOutSdl3;
            dialogOutSlowSdl;
            dialogOutSdl2;
            dialogSdl3.push_back("\n    You have arrived in Valhalla. Each house is starting to\nlight up. Then people begin to walk crowded. The atmosphere\nchanged quickly. You enter the inn and meet a Valkyrie.\nHe is a very wealthy jeweler and owned the place.\nHe has organized an auction. There are many participants\neating and drinking happily.\n");
            pressEnterSdl();
            dialogSdl.clear();
            dialogSdl.push_back("\n    There are many  beautiful jewels. Some are common and some are\nrare ones. They are all continually being auctioned off. And in the\nend there is one last gem which is the highlight of the\ngem tonight. It might be the gem you are looking for.\n");
            dialogSdl2.insert(dialogSdl2.begin() + 2, "Will you try bidding?\n");
            dialogSdl2.insert(dialogSdl2.begin() + 3,"1) Yes.\n");
            dialogSdl2.insert(dialogSdl2.begin() + 4,"2) No.\n");
            dialogOutSdl3;
            dialogOutSlowSdl;
            dialogOutSdl2;
            dialogSdl2.erase(dialogSdl2.begin() + 2, dialogSdl2.begin() + 5);
            dialogSdl3.push_back("\n    There are many  beautiful jewels. Some are common and some are\nrare ones. They are all continually being auctioned off. And in the\nend there is one last gem which is the highlight of the\ngem tonight. It might be the gem you are looking for.\n");
            do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.\n";
                continue;
                }break;
            }while(true);
            dialogSdl.clear();
            system("cls");
            if(answer == 1){
                dialogSdl2.insert(dialogSdl2.begin() + 2, "How much will you bid?\n");
                do{
                    system("cls");
                    dialogOutSdl3;
                    dialogOutSdl2;
                    cin>>bidding;
                    if(bidding>money){
                        dialogSdl2.insert(dialogSdl2.begin() + 4, "You don't have enough coin.\n\n");
                        continue;
                    }else break;
                }while(true);
                int x = rand() % 100 + 1;
                if(x <= 50){
                    dialogSdl.clear();
                    dialogSdl2.erase(dialogSdl2.begin() + 1, dialogSdl2.end());
                    system("cls");
                    dialogSdl3.push_back("\n-----------------------------------------------------------------\n");
                    dialogSdl.push_back("\n             Some one cut more money than you have\n");
                    dialogSdl2.insert(dialogSdl2.begin(), "\n-----------------------------------------------------------------\n");
                    dialogOutSdl3;
                    dialogOutSlowSdl;
                    dialogOutSdl2;
                    dialogSdl.clear();
                    dialogSdl3.push_back("\n             Some one cut more money than you have\n");
                    dialogSdl3.push_back("\n-----------------------------------------------------------------\n");
                    dialogSdl2.erase(dialogSdl2.begin(), dialogSdl2.begin() + 1);
                    cin.ignore();
                    pressEnterSdl();
                    if(vase == 1){
                        dialogSdl.push_back("\n    Fortunately, you have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                        dialogOutSdl3;
                        dialogOutSlowSdl;
                        dialogOutSdl2;
                        dialogSdl3.push_back("\n    Fortunately, you have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                        pressEnterSdl();
                        dialogSdl.clear();
                        dialogSdl.push_back("\n    You win the bid this time.\n\n    You get a Sodalite, the \"Crystal of Logic\"\n\n");
                        sodalite=1;
                        dialogSdl2.insert(dialogSdl2.begin(),"--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                        dialogOutSdl3;
                        dialogOutSlowSdl;
                        dialogOutSdl2;
                        dialogSdl3.push_back("\n    You win the bid this time.\n\n    You get a Sodalite, the \"Crystal of Logic\"\n\n");
                        dialogSdl3.push_back("--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                        dialogSdl2.erase(dialogSdl2.begin(), dialogSdl2.begin() + 1);
                        pressEnterSdl();
                        dialogSdl.clear();
                        dialogSdl.push_back("\n    The vase you\'ve got from Mark Clay\'s help you win the\nauction because it is priceless. Valkyrie also likes\nthis artwork but he couldn't own it in the past.\nSo, you get Sodalite and you get another bonus.\n");
                        money = money - bidding + 15;//
                        moneycheckSdl;
                        dialogOutSdl3;
                        dialogOutSlowSdl;
                        for (char c : "\n    You get 15 coins \n\n    Your coins: ") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        cout << money;
                        for (char c : " (+15)\n") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        dialogOutSdl2;
                        cin.ignore();
                    }else if(vase == 0){
                        dialogSdl.push_back("\n    If that's not enough, you won't get this crystal.\n");
                        dialogSdl.push_back("\n    Unfortunately, you lost the bid this time. And the one who\nget this Sodalite gem is the son of the nobleman of this city.\nIt seems that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                        dialogOutSdl3;
                        dialogOutSlowSdl;
                        dialogOutSdl2;
                        cin.ignore();
                    }
                }else if(cut==0){
                    dialogSdl.clear();
                    dialogSdl2.erase(dialogSdl2.begin() + 1, dialogSdl2.end());
                    system("cls");
                    dialogSdl.push_back("\n    You win the bid this time.\n\n    You get a Sodalite, the \"Crystal of Logic\"\n");
                    dialogSdl2.insert(dialogSdl2.begin(), "\n ------------------------------------------------ \n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n ------------------------------------------------ \n");
                    dialogOutSdl3;
                    dialogOutSlowSdl;
                    money = money - bidding + 15;//
                    moneycheckSdl;
                    for (char c : "\n    You get 15 coins\n\n    Your coins: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    cout << money;
                    for (char c : " (+15)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));                        
                    }
                    dialogOutSdl2;
                    cin.ignore();
                }
            }else if(answer==2){
                dialogSdl2.insert(dialogSdl2.begin()+2, "No?, won\'t you give it a try?\n");
                dialogSdl2.insert(dialogSdl2.begin()+3, "1) Ok, let\'s try.\n");
                dialogSdl2.insert(dialogSdl2.begin()+4, "2) No.\n");
                dialogOutSdl3;
                dialogOutSlowSdl;
                dialogOutSdl2;
                dialogSdl2.erase(dialogSdl2.begin() + 2, dialogSdl2.begin() + 4);
                do{
                    cout<<"Your Choice: ";
                    cin>>answer;
                    if(answer!=1&&answer!=2){
                        cout<<"Wrong answer, Try again.\n";
                        continue;
                    }break;
                }while(true);
                if(answer == 1){
                    dialogSdl2.insert(dialogSdl2.begin() + 2, "How much will you bid?\n");
                    do{
                        system("cls");
                        dialogOutSdl3;
                        dialogOutSdl2;
                        cin>>bidding;
                        if(bidding>money){
                            dialogSdl2.insert(dialogSdl2.begin() + 4, "You don't have enough coin.\n\n");
                            continue;
                        }else break;
                    }while(true);
                    int x = rand() % 100 + 1;
                    if(x <= 50){
                        dialogSdl.clear();
                        dialogSdl2.erase(dialogSdl2.begin() + 1, dialogSdl2.end());
                        system("cls");
                        dialogSdl3.push_back("\n-----------------------------------------------------------------\n");
                        dialogSdl.push_back("\n             Some one cut more money than you have\n");
                        dialogSdl2.insert(dialogSdl2.begin(), "\n-----------------------------------------------------------------\n");
                        dialogOutSdl3;
                        dialogOutSlowSdl;
                        dialogOutSdl2;
                        dialogSdl.clear();
                        dialogSdl3.push_back("\n             Some one cut more money than you have\n");
                        dialogSdl3.push_back("\n-----------------------------------------------------------------\n");
                        dialogSdl2.erase(dialogSdl2.begin(), dialogSdl2.begin() + 1);
                        cin.ignore();
                        pressEnterSdl();
                        if(vase == 1){
                            dialogSdl.push_back("\n    Fortunately, you have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                            dialogOutSdl3;
                            dialogOutSlowSdl;
                            dialogOutSdl2;
                            dialogSdl3.push_back("\n    Fortunately, you have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                            pressEnterSdl();
                            dialogSdl.clear();
                            dialogSdl.push_back("\n    You win the bid this time.\n\n    You get a Sodalite, the \"Crystal of Logic\"\n\n");
                            sodalite=1;
                            dialogSdl2.insert(dialogSdl2.begin(),"--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                            dialogOutSdl3;
                            dialogOutSlowSdl;
                            dialogOutSdl2;
                            dialogSdl3.push_back("\n    You win the bid this time.\n\n    You get a Sodalite, the \"Crystal of Logic\"\n\n");
                            dialogSdl3.push_back("--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                            dialogSdl2.erase(dialogSdl2.begin(), dialogSdl2.begin() + 1);
                            pressEnterSdl();
                            dialogSdl.clear();
                            dialogSdl.push_back("\n    The vase you\'ve got from Mark Clay\'s help you win the\nauction because it is priceless. Valkyrie also likes\nthis artwork but he couldn't own it in the past.\nSo, you get Sodalite and you get another bonus.\n");
                            money = money - bidding + 15;//
                            moneycheckSdl;
                            dialogOutSdl3;
                            dialogOutSlowSdl;
                            for (char c : "\n    You get 15 coins \n\n    Your coins: ") {
                                cout << c;
                                this_thread::sleep_for(chrono::milliseconds(50));
                            }
                            cout << money;
                            for (char c : " (+15)\n") {
                                cout << c;
                                this_thread::sleep_for(chrono::milliseconds(50));
                            }
                            dialogOutSdl2;
                            cin.ignore();
                        }else if(vase == 0){
                            dialogSdl.push_back("\n    If that's not, enough you won't get this crystal.\n");
                            dialogSdl.push_back("\n    Unfortunately, you lost the bid this time. And the one who\ngot this Sodalite gem was the son of the nobleman of this city.\nIt seemed that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                            dialogOutSdl3;
                            dialogOutSlowSdl;
                            dialogOutSdl2;
                            cin.ignore();
                        }
                    }else if(cut==0){
                        dialogSdl.clear();
                        dialogSdl2.erase(dialogSdl2.begin() + 1, dialogSdl2.end());
                        system("cls");
                        dialogSdl.push_back("\n    You win the bid this time.\n\n    You get a Sodalite, the \"Crystal of Logic\"\n");
                        dialogSdl2.insert(dialogSdl2.begin(), "\n ------------------------------------------------ \n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n ------------------------------------------------ \n");
                        dialogOutSdl3;
                        dialogOutSlowSdl;
                        money = money - bidding + 15;//
                        moneycheckSdl;
                        for (char c : "\n    You get 15 coins\n\n    Your coins: ") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                        }
                        cout << money;
                        for (char c : " (+15)\n") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));                        
                        }
                        dialogOutSdl2;
                        cin.ignore();
                    }
                }else if(answer==2){
                    dialogSdl.clear();
                    dialogSdl.push_back("************************************\n");
                    dialogSdl.push_back("You got nothing, just keep going.\n\n");
                    dialogSdl.push_back("************************************\n");
                    dialogOutSdl;
                    cin.ignore();
                }
            }
}
  