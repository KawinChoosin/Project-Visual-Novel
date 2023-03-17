#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

#define dialogOutFlr for(auto i = dialogFlr.begin(); i != dialogFlr.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutFlr2 for(auto i = dialogFlr2.begin(); i != dialogFlr2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutFlr3 for(auto i = dialogFlr3.begin(); i != dialogFlr3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowFlr for(auto i = dialogFlr.begin(); i != dialogFlr.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา

#define hpcheckFlr if(hp<=0){\
    pressEnterFlr();\
    playerLoseFlr();\
    pressEnterFlr();\
    break;\
    }\

#define moneycheckFlr if(money<0){\
    money=0;\
    }\

void playerLoseFlr(){
    cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*                   YOU LOSE!!!                       *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
}
vector<string> dialogFlr;
vector<string> dialogFlr2;
vector<string> dialogFlr3;
bool win;

void pressEnterFlr(){
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");
}

void Flr(int &hp, int &money, bool &fluorite){
    int answer;
    bool win;
    while(true){
        system("cls");
        dialogFlr3.push_back("*****************************************************************\n");
        dialogFlr.push_back("      Now it looks like you're getting lost in the middle\nof a barren valley. There are no people roaming around,\nonly a hot wind blowing past.\n");
        dialogFlr2.push_back("\n*****************************************************************\n");
        dialogOutFlr3;
        dialogOutSlowFlr;
        dialogOutFlr2;
        pressEnterFlr();
        dialogFlr3.push_back("      Now it looks like you're getting lost in the middle\nof a barren valley. There are no people roaming around,\nonly a hot wind blowing past.\n");
        system("cls");
        dialogFlr.clear();
        dialogFlr.push_back("\n      As you are walking through the crossroad, there is a\nragged and unconscious man running towards you.\n");
        dialogOutFlr3;
        dialogOutSlowFlr;
        dialogOutFlr2;
        pressEnterFlr();
        system("cls");
        dialogFlr.clear();
        dialogFlr3.push_back("\n      As you are walking through the crossroad, there is a\nragged and unconscious man running towards you.\n");
        dialogFlr.push_back("\n      He asks for food along with shaking your hand because he is\nvery hungry and hasn't eaten for days. At that time you had\nenough food with you for one more day\n");
        dialogFlr2.push_back("-------------------------------------------------------------------\n");
        dialogFlr2.push_back("WOULD YOU GIVE HIM FOOD OR NOT?\n");
        dialogFlr2.push_back("1) Yes, I would.\n");
        dialogFlr2.push_back("2) No, I would\'nt\n");
        dialogFlr2.push_back("-------------------------------------------------------------------\n");
        dialogFlr2.push_back("Your Choice: ");
        dialogOutFlr3;
        dialogOutSlowFlr;
        dialogOutFlr2;
        dialogFlr3.push_back("\n      He asks for food along with shaking your hand because he is\nvery hungry and hasn't eaten for days. At that time you had\nenough food with you for one more day\n");
        cin>>answer;
        dialogFlr.clear();
        dialogFlr2.erase(dialogFlr2.begin() + 1, dialogFlr2.end());
        system("cls");
        if(answer==1){
            dialogFlr.push_back("\n      You give him food. He eats it rapidly as soon as he receives it.\nWhen he finishes eating, he invites you to the city.\n");
            dialogFlr2.push_back("-------------------------------------------------------------------\n");
            dialogFlr2.push_back("WILL YOU GO WITH HIM?\n");
            dialogFlr2.push_back("1) YES.\n");
            dialogFlr2.push_back("2) NO.\n");
            dialogFlr2.push_back("-------------------------------------------------------------------\n");
            dialogFlr2.push_back("Your Choice: ");
            dialogOutFlr3;
            dialogOutSlowFlr;
            dialogOutFlr2;
            dialogFlr3.push_back("\n      You give him food. He eats it rapidly as soon as he receives it.\nWhen he finishes eating, he invites you to the city.\n");
            do{
                cin>>answer;
                if(answer!=1&&answer!=2){
                    continue;
                }break;
            }while(true);
            system("cls");
            dialogFlr.clear();
            dialogFlr2.erase(dialogFlr2.begin() + 1, dialogFlr2.end());
            if(answer==1){
            dialogFlr.push_back("\n      You accept the invitation. He leads you to a big cave by\npassing through many intersections, then finds a hugewaterfall curtain.\n");
            dialogOutFlr3;
            dialogOutSlowFlr;
            dialogOutFlr2;
            dialogFlr3.push_back("\n      You accept the invitation. He leads you to a big cave by\npassing through many intersections, then finds a hugewaterfall curtain.\n");
            pressEnterFlr();
            system("cls");
            dialogFlr.clear();
            dialogFlr.push_back("\n     Through the curtain of the waterfall, the seemingly\nunconsciousman was purified into a cleanand haloed man.\n");
            dialogOutFlr3;
            dialogOutSlowFlr;
            dialogOutFlr2;
            dialogFlr3.push_back("\n     Through the curtain of the waterfall, the seemingly\nunconsciousman was purified into a cleanand haloed man.\n");
            pressEnterFlr();
            system("cls");
            dialogFlr.clear();
            dialogFlr.push_back("\n     Later, you realized that he is a priest named Tamo Mae and\nthis city is El Dorado, a city full of gold and precious stones. \n");
            dialogOutFlr3;
            dialogOutSlowFlr;
            dialogOutFlr2;
            dialogFlr3.push_back("\n     Later, you realized that he is a priest named Tamo Mae and\nthis city is El Dorado, a city full of gold and precious stones. \n");
            pressEnterFlr();
            system("cls");
            dialogFlr.clear();
            dialogFlr.push_back("\n     The priest invites you to stay in the temple and provide you\nwith food. So then this morning, you wake up refreshed and see\nthe beautiful and sylvan view of this temple. The priest asks\nyou to play \'Multiply Games\'.\n");
            dialogFlr2.push_back("-------------------------------------------------------------------\n");
            dialogFlr2.push_back("Do you want to play?\n");
            dialogFlr2.push_back("1) Yes.\n");
            dialogFlr2.push_back("2) No.\n");
            dialogFlr2.push_back("-------------------------------------------------------------------\n");
            dialogFlr2.push_back("Your Choice: ");
            dialogOutFlr3;
            dialogOutSlowFlr;
            dialogOutFlr2;
            dialogFlr3.push_back("\n     The priest invites you to stay in the temple and provide you\nwith food. So then this morning, you wake up refreshed and see\nthe beautiful and sylvan view of this temple. The priest asks\nyou to play \'Multiply Games\'.\n");
            cin>>answer;
            system("cls");
            dialogFlr2.erase(dialogFlr2.begin() + 1, dialogFlr2.end());
            if(answer==2){
                pressEnterFlr();
                dialogFlr.clear();
                dialogFlr.push_back("\n     The priest treats you to breakfast and lets you leave\nthe city by yourself. In fact, leaving the city on your own\nis impossible because the city plan is complicated. You have to\nhire some disciples of the temple to help you leave the city.\n");
                dialogOutFlr3;
                dialogOutSlowFlr;
                money-=5;//
              
                moneycheckFlr;
                for (char c : "You lose 5 coins \n\nYour coins: ") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                }
                cout<< money;
                for (char c : " (-5)\n") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                }
                dialogOutFlr2;
                dialogFlr3.push_back("\n     The priest treats you to breakfast and lets you leave\nthe city by yourself. In fact, leaving the city on your own\nis impossible because the city plan is complicated. You have to\nhire some disciples of the temple to help you leave the city.\n");
            }else if(answer==1){
                int x=rand()%70+30;
                int y=rand()%70+30;
                system("cls");
                cout<<"*****************************************************************\n";
                cout<<"                     MULTIPLY GAMES\n";
                cout<<"\n*****************************************************************\n";
                cout<<"------------------------------------------------------------------\n";
                cout<<x<<" * "<<y<<" = ?\n";
                cout<<"------------------------------------------------------------------\n";
                cout<<"Your Answer = ";
                cin>>answer;
                if(answer==x*y){
                    win=1;
                }
                if(answer!=x*y){
                    win=0;
                }
                pressEnterFlr();
                if(win==1){
                    dialogFlr.clear();
                    cout<<"------------------------------------------------------------------\n";
                    cout<<"CORRECT! YOU\'VE WON THE GAME.\n";
                    cout<<"------------------------------------------------------------------\n";
                    pressEnterFlr();
                    system("cls");
                    dialogFlr.push_back
                    ("\n    The priest gave you an Fluorite , the \"Crystal of Logic\".\n");
                    fluorite=true; //Get Fluorite//
                    dialogOutFlr3;
                    dialogOutSlowFlr;
                    dialogOutFlr2;
                    dialogFlr.clear();
                    dialogFlr3.push_back
                    ("\n    The priest gave you an Fluorite , the \"Crystal of Logic\"\n");
                    pressEnterFlr();
                    system("cls");
                    dialogFlr.push_back("\n       Fluorite is used to clean out bad energies, encourage\npoliteness and intelligence.\n");
                    dialogFlr.push_back("\n       Then he let the disciples lead you out of the city.\n");
                    dialogOutFlr3;
                    dialogOutSlowFlr;
                    dialogOutFlr2;
                }else if(win==0){
                    cout<<"------------------------------------------------------------------\n";
                    cout<<"INCORRECT! YOU LOSE T^T.\n";
                    cout<<"------------------------------------------------------------------\n";
                    pressEnterFlr();
                    system("cls");
                    dialogFlr.clear();
                    dialogFlr.push_back("\n     The priest treats you to breakfast and lets you leave\nthe city by yourself. In fact, leaving the city\non your own is impossible because the city plan is complicated.\nYou have to hire some disciples of the temple to help\nyou leave the city.\n");
                    dialogOutFlr3;
                    dialogOutSlowFlr;
                    money-=5;
                    for (char c : "\nYou lose 5 coins \n\nYour coins: ") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    cout<< money;
                    for (char c : " (-5)\n") {
                            cout << c;
                            this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutFlr2;
                }
            }
            }
        }else if(answer==2){
            dialogFlr.push_back("\n     You declined his request. That hungry ugly guy hits you hard.\n");
            dialogOutFlr3;
            dialogOutSlowFlr;
            
            hp-=1;//
            for (char c : "\nYou lose 1 hp.\n\nYour hp: ") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            cout<< hp;
            for (char c : "  (-1)\n") {
                cout << c;
                this_thread::sleep_for(chrono::milliseconds(50));
            }
            dialogOutFlr2;
            hpcheckFlr;
            pressEnterFlr();
            cout<<"========================================================\n";
            cout<<"\nYOU ALREADY MISSED SOMETHING ...\n"; 
            cout<<"\n========================================================\n";


        }
    break; 
    }
    dialogFlr.clear();
    pressEnterFlr();
    cout<<("\n*****************************************************************\n");
    cout<<("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");
    pressEnterFlr();
} 

