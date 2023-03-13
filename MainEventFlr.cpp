#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

#define dialogOut for(auto i = dialogFlr.begin(); i != dialogFlr.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOut2 for(auto i = dialogFlr2.begin(); i != dialogFlr2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOut3 for(auto i = dialogFlr3.begin(); i != dialogFlr3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowFlr for(auto i = dialogFlr.begin(); i != dialogFlr.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา

vector<string> dialogFlr;
vector<string> dialogFlr2;
vector<string> dialogFlr3;
bool win;

void pressEnterFlr(){
    cout<<"Press Enter to continue...";
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
        dialogOut3;
        dialogOutSlowFlr;
        dialogOut2;
        pressEnterFlr();
        dialogFlr3.push_back("      Now it looks like you're getting lost in the middle\nof a barren valley. There are no people roaming around,\nonly a hot wind blowing past.\n");
        system("cls");
        dialogFlr.clear();
        dialogFlr.push_back("\n      As you are walking through the crossroad, there is a\nragged and unconscious man running towards you.\n");
        dialogOut3;
        dialogOutSlowFlr;
        dialogOut2;
        pressEnterFlr();
        system("cls");
        dialogFlr.clear();
        dialogFlr3.push_back("\n      As you are walking through the crossroad, there is a\nragged and unconscious man running towards you.\n");
        dialogFlr.push_back("\n     He asks for food along with shaking your hand because he is\nvery hungry and hasn't eaten for days. At that time you had\nenough food with you for one more day\n");
        dialogFlr2.push_back("-------------------------------------------------------------------\n");
        dialogFlr2.push_back("WOULD YOU GIVE HIM FOOD OR NOT?\n");
        dialogFlr2.push_back("1) Yes, I would.\n");
        dialogFlr2.push_back("2) No, I would\'nt\n");
        dialogFlr2.push_back("-------------------------------------------------------------------\n");
        dialogOut3;
        dialogOutSlowFlr;
        dialogOut2;
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.\n";
                continue;
            }break;
        }while(true);
        system("cls");
        dialogFlr.clear();
        if(answer==1){
            dialogFlr.push_back
            ("\n*****************************************************************\n");
            dialogFlr.push_back
            ("You give him food. He eats it rapidly as soon as he receives it.\nWhen he finishes eating, he invites you to the city.\n");
            dialogFlr.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            pressEnterFlr();
            dialogFlr.push_back
            ("-------------------------------------------------------------------\n");
            dialogFlr.push_back
            ("WILL YOU GO WITH HIM?\n");
            dialogFlr.push_back
            ("1) YES.\n");
            dialogFlr.push_back
            ("2) YES.\n");
            dialogFlr.push_back
            ("-------------------------------------------------------------------\n");
            dialogOut;
            do{
                cout<<"Your Choice: ";
                cin>>answer;
                if(answer!=1&&answer!=2){
                    cout<<"Wrong answer, Try again.";
                    continue;
                }break;
            }while(true);
            system("cls");
            dialogFlr.clear();
            dialogFlr.push_back
            ("*****************************************************************\n");
            dialogFlr.push_back
            ("      You accept the invitation. He leads you to a big cave by\npassing through many intersections, then finds\na hugewaterfall curtain.\n");
            dialogFlr.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            pressEnterFlr();
            dialogFlr.insert(dialogFlr.begin()+2,
            "\n     Through the curtain of the waterfall, the seemingly\nunconsciousman was purified into\na cleanand haloed man.\n");
            dialogOut;
            pressEnterFlr();
            dialogFlr.insert(dialogFlr.begin()+3,
            "\n     Later, you realized that he is a priest named Tamo Mae and\nthis city is El Dorado, a city full of gold and precious stones. \n");
            dialogOut;
            pressEnterFlr();
            dialogFlr.erase(dialogFlr.begin()+1,dialogFlr.begin()+4);
            dialogFlr.insert(dialogFlr.begin()+1,
            "     The priest invites you to stay in the temple and provide you\nwith food. So then this morning, you wake up refreshed\nand see the beautiful and sylvan view of this temple.\nThe priest asks you to play \'Multiply Games\'.\n");
            dialogOut;
            pressEnterFlr();
            dialogFlr.push_back
            ("-------------------------------------------------------------------\n");
            dialogFlr.push_back
            ("Do you want to play?\n");
            dialogFlr.push_back
            ("1) Yes.\n");
            dialogFlr.push_back
            ("2) No.\n");
            dialogFlr.push_back
            ("-------------------------------------------------------------------\n");
            dialogOut;
            do{
                cout<<"Your Choice: ";
                cin>>answer;
                if(answer!=1&&answer!=2){
                    cout<<"Wrong answer, Try again.";
                    continue;
                }break;
            }while(true);
            system("cls");
            if(answer==2){
                pressEnterFlr();
                dialogFlr.erase(dialogFlr.begin()+3,dialogFlr.begin()+8);
                dialogFlr.insert(dialogFlr.begin()+2,
                "\n     The priest treats you to breakfast and lets you leave\nthe city by yourself. In fact, leaving the city\non your own is impossible because the city plan is complicated.\nYou have to hire some disciples of the temple to help\nyou leave the city.\n");
                dialogOut;
                pressEnterFlr();
                money-=5;
                cout<<"-----------------------------------------\n";cout<<"You lose 5 coins \nYour coins: "<<money<<"  (-5)\n";cout<<"-----------------------------------------\n";
            }else if(answer==1){
                int x=rand()%70+30;
                int y=rand()%70+30;
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
                    dialogFlr.push_back
                    ("*****************************************************************\n");
                    dialogFlr.push_back
                    ("    The priest gave you an Fluorite , the \"Crystal of Logic\"\n");
                    dialogFlr.push_back
                    ("\n*****************************************************************\n");
                    fluorite=true; //Get Fluorite//
                    dialogOut;
                    pressEnterFlr();
                    dialogFlr.insert(dialogFlr.begin()+2,
                    "\n       Fluorite is used to clean out bad energies, encourage\npoliteness and intelligence.\n");
                    dialogFlr.insert(dialogFlr.begin()+3,
                    "\n       Then he let the disciples lead you out of the city.\n");
                    dialogOut;
                    
                }else if(win==0){
                    cout<<"------------------------------------------------------------------\n";
                    cout<<"INCORRECT! YOU LOSE T^T.\n";
                    cout<<"------------------------------------------------------------------\n";
                    pressEnterFlr();
                    dialogFlr.erase(dialogFlr.begin()+3,dialogFlr.begin()+8);
                    dialogFlr.erase(dialogFlr.begin()+1);
                    dialogFlr.insert(dialogFlr.begin()+1,
                    "     The priest treats you to breakfast and lets you leave\nthe city by yourself. In fact, leaving the city\non your own is impossible because the city plan is complicated.\nYou have to hire some disciples of the temple to help\nyou leave the city.\n");
                    dialogOut;
                    pressEnterFlr();
                    money-=5;
                    cout<<"-----------------------------------------\n";cout<<"You lose 5 coins \nYour coins: "<<money<<"  (-5)\n";cout<<"-----------------------------------------\n";
                 
                }
                
            }

        }else if(answer==2){
            dialogFlr.push_back
            ("*****************************************************************\n");
            dialogFlr.push_back
            ("  You declined his request. That hungry ugly guy hits you hard.\n");
            dialogFlr.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            cin.ignore();
            pressEnterFlr();
            //Lose HP//
            hp-=1;
            cout<<"-----------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-----------------------------------------\n";
            pressEnterFlr();
            cout<<
            "========================================================\n";
            cout<<"\nYOU ALREADY MISSED SOMETHING ...\n";
            cout<<
            "\n========================================================\n";


        }
    break; 
    }
    dialogFlr.clear();
    pressEnterFlr();
    cout<<("\n*****************************************************************\n");
    cout<<("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");

}

//Tester//
int main(){
    srand(time(0));
    int hp,money;
    bool fluorite;
    Flr(hp,money,fluorite);
}


    




















 