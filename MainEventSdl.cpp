#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

#define dialogOut for(auto i = dialogSdl.begin(); i != dialogSdl.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

vector<string> dialogSdl;
int bidding;
bool cut;

void pressEnterSdl(){
    cout<<"Press Enter to continue...";
    cin.get();
    system("cls");
}

void Sdl(int &hp, int &money, bool &sodalite, bool &vase){
    int answer;
    while(true){
        system("cls");
        \
        dialogSdl.push_back
        ("*****************************************************************\n");
        dialogSdl.push_back
        ("  In the twilight you The sun was about to set after a long \njourney. You passed by a town that looked quiet outside. No\n one was passing by at all. surrounded by large mountains and\nthere was only a dim torch light in front of the city gate. \n");
        dialogSdl.push_back
        ("\n*****************************************************************\n");
        dialogOut;
        pressEnterSdl();
        dialogSdl.push_back("-----------------------------------------------------------------\n");
        dialogSdl.push_back("Are you going in? ");
        dialogSdl.push_back("\n1) Yes.");
        dialogSdl.push_back("\n2) No.\n");
        dialogSdl.push_back("-----------------------------------------------------------------\n");
        dialogOut;
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.";
                continue;
            }break;
        }while(true);
        dialogSdl.clear();
        system("cls");
        if(answer==1){
            dialogSdl.push_back
            ("*****************************************************************\n");
            dialogSdl.push_back
            ("  You have arrived in Valhalla. Each house is starting to\n light up. Then people began to walk crowded. The atmosphere\n changed quickly. You entered the inn and met a Valkyrie.\n He was a very wealthy jeweler and owned the place.\nHe had organized an auction. There were many participants\neating   and drinking happily. \n");
            dialogSdl.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            cin.ignore();
            pressEnterSdl();
            dialogSdl.insert(dialogSdl.begin()+2,
            "\n   There are many  beautiful jewels. some are common Some\n rare ones are continually being auctioned off. And in the\n end there is one last gem. One that was the highlight of the\n gem tonight. It might be the gem you are looking for. \n");
            dialogSdl.push_back("-----------------------------------------------------------------\n");
            dialogSdl.push_back("Will you try bidding?\n");
            dialogSdl.push_back("1) Yes.\n");
            dialogSdl.push_back("2) No.\n");
            dialogSdl.push_back("-----------------------------------------------------------------\n");
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
            if(answer==1){
                dialogSdl.erase(dialogSdl.begin()+5,dialogSdl.begin()+8);
                dialogSdl.insert(dialogSdl.begin()+5, "How much will you bid?\n");
                dialogOut;
                do{
                    cout<<"How much: ";
                    cin>>bidding;
                    if(bidding>money){
                        cout<<"You dont have enough coin.\n";
                        continue;
                    }break;
                }while(true);
                int x=rand()%100+1;
                if(x<=50) cut=1;
                else if(x>50) cut=0;
                if(cut==1){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("-----------------------------------------------------------------\n");
                    dialogSdl.push_back("\n             Someone cut more money than you have\n");
                    dialogSdl.push_back("\n-----------------------------------------------------------------\n");
                    dialogOut;
                    if(vase==1){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back("     Unfortunately, You have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.insert(dialogSdl.begin()+5,"\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                        sodalite=1;
                        dialogSdl.push_back(
                        "--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.clear();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back
                        ("  The vase you\'ve got from Mark Clay\'s help you win the\nauction because it is priceless. Valkyrie also likes\nthis artwork but he couldn't own it in the past.\nSo, you get Sodalite and you get another bonus.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        money+=15;
                        cout<<"---------------------------------------------------";
                        cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                        cout<<"---------------------------------------------------\n";
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;

                    }else if(vase==0){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("*****************************************************************\n");
                        dialogSdl.push_back
                        ("      If that's not enough you won't get this crystal.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.insert(dialogSdl.begin()+5,
                        "   \nUnfortunately, you lost the bid this time. And the one who\ngot this Sodalite gem was the son of the nobleman of this city.\nIt seemed that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                        dialogOut;
                    }
                }else if(cut==0){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("*****************************************************************");
                    dialogSdl.push_back("\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                    dialogSdl.push_back("\n*****************************************************************\n");
                    dialogOut;
                    cin.ignore();
                    pressEnterSdl();
                    dialogSdl.insert(dialogSdl.begin()+2,
                    "\n ------------------------------------------------ \n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n ------------------------------------------------ \n");
                    dialogOut;
                    money+=15;
                    pressEnterSdl();
                    cout<<"---------------------------------------------------";
                    cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                    cout<<"---------------------------------------------------\n";
        
                }
               
               

            }else if(answer==2){
                    dialogSdl.erase(dialogSdl.begin()+5,dialogSdl.begin()+8);
                    dialogSdl.insert(dialogSdl.begin()+5, "No?, won\'t you give it a try?\n");
                    dialogSdl.insert(dialogSdl.begin()+6,"1) Yes.\n");
                    dialogSdl.insert(dialogSdl.begin()+7,"2) No.\n");
                    dialogOut;
                    do{
                        cout<<"Your Choice: ";
                        cin>>answer;
                        if(answer!=1&&answer!=2){
                            cout<<"Wrong answer, Try again.";
                            continue;
                        }break;
                    }while(true);
                    if(answer==1){
                        if(answer==1){
                dialogSdl.erase(dialogSdl.begin()+5,dialogSdl.begin()+8);
                dialogSdl.insert(dialogSdl.begin()+5, "How much will you bid?\n");
                dialogOut;
                do{
                    cout<<"How much: ";
                    cin>>bidding;
                    if(bidding>money){
                        cout<<"You dont have enough coin.\n";
                        continue;
                    }break;
                }while(true);
                int x=rand()%100+1;
                if(x<=50) cut=1;
                else if(x>50) cut=0;
                if(cut==1){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("-----------------------------------------------------------------\n");
                    dialogSdl.push_back("\n             Someone cut more money than you have\n");
                    dialogSdl.push_back("\n-----------------------------------------------------------------\n");
                    dialogOut;
                    if(vase==1){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back("     Unfortunately, You have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.insert(dialogSdl.begin()+5,"\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                        sodalite=1;
                        dialogSdl.push_back(
                        "--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.clear();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back
                        ("  The vase you\'ve got from Mark Clay\'s help you win the\nauction because it is priceless. Valkyrie also likes\nthis artwork but he couldn't own it in the past.\nSo, you get Sodalite and you get another bonus.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        money+=15;
                        cout<<"---------------------------------------------------";
                        cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                        cout<<"---------------------------------------------------\n";
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;

                    }else if(vase==0){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("*****************************************************************\n");
                        dialogSdl.push_back
                        ("      If that's not enough you won't get this crystal.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.insert(dialogSdl.begin()+5,
                        "   \nUnfortunately, you lost the bid this time. And the one who\ngot this Sodalite gem was the son of the nobleman of this city.\nIt seemed that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                        dialogOut;
                    }
                }else if(cut==0){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("*****************************************************************");
                    dialogSdl.push_back("\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                    dialogSdl.push_back("\n*****************************************************************\n");
                    dialogOut;
                    cin.ignore();
                    pressEnterSdl();
                    dialogSdl.insert(dialogSdl.begin()+2,
                    "\n ------------------------------------------------ \n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n ------------------------------------------------ \n");
                    dialogOut;
                    money+=15;
                    pressEnterSdl();
                    cout<<"---------------------------------------------------";
                    cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                    cout<<"---------------------------------------------------\n";
        
                }
                    }
               }else if(answer==2){
                    dialogSdl.clear();
                    dialogSdl.push_back("************************************\n");
                    dialogSdl.push_back("You got nothing, just keep going.\n\n");
                    dialogSdl.push_back("************************************\n");
                    dialogOut;
               }
               
           }
    }else if(answer==2){
        dialogSdl.push_back
        ("*****************************************************************\n");
        dialogSdl.push_back
        ("At that moment, an old man passing by says to you, Inside there\nis the item you are looking for, and after you leave, will you\ngo back in?\n");
        dialogSdl.push_back
        ("\n*****************************************************************\n");
        dialogSdl.push_back
        ("-------------------------------------------------------------\n");
        dialogSdl.push_back
        ("Will you go back in?\n");
        dialogSdl.push_back
        ("1) Yes.\n");
        dialogSdl.push_back
        ("2) No.\n");
        dialogSdl.push_back
        ("-------------------------------------------------------------\n");
        dialogOut;
        
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.";
                continue;
            }break;
        }while(true);
        dialogSdl.clear();
        pressEnterSdl();
        if(answer==2){
            
            dialogSdl.push_back("************************************\n");
            dialogSdl.push_back("You got nothing, just keep going.\n\n");
            dialogSdl.push_back("************************************\n");
            dialogOut;



        }else if(answer==1){
            dialogSdl.push_back
            ("*****************************************************************\n");
            dialogSdl.push_back
            ("  You have arrived in Valhalla. Each house is starting to\n light up. Then people began to walk crowded. The atmosphere\n changed quickly. You entered the inn and met a Valkyrie.\n He was a very wealthy jeweler and owned the place.\nHe had organized an auction. There were many participants\neating   and drinking happily. \n");
            dialogSdl.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            pressEnterSdl();
            dialogSdl.insert(dialogSdl.begin()+2,
            "\n   There are many  beautiful jewels. some are common Some\n rare ones are continually being auctioned off. And in the\n end there is one last gem. One that was the highlight of the\n gem tonight. It might be the gem you are looking for. \n");
            dialogSdl.push_back("-----------------------------------------------------------------\n");
            dialogSdl.push_back("Will you try bidding?\n");
            dialogSdl.push_back("1) Yes.\n");
            dialogSdl.push_back("2) No.\n");
            dialogSdl.push_back("-----------------------------------------------------------------\n");
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
            if(answer==1){
                dialogSdl.erase(dialogSdl.begin()+5,dialogSdl.begin()+8);
                dialogSdl.insert(dialogSdl.begin()+5, "How much will you bid?\n");
                dialogOut;
                do{
                    cout<<"How much: ";
                    cin>>bidding;
                    if(bidding>money){
                        cout<<"You dont have enough coin.\n";
                        continue;
                    }break;
                }while(true);
                int x=rand()%100+1;
                if(x<=50) cut=1;
                else if(x>50) cut=0;
                if(cut==1){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("-----------------------------------------------------------------\n");
                    dialogSdl.push_back("\n             Someone cut more money than you have\n");
                    dialogSdl.push_back("\n-----------------------------------------------------------------\n");
                    dialogOut;
                    if(vase==1){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back("     Unfortunately, You have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.insert(dialogSdl.begin()+5,"\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                        sodalite=1;
                        dialogSdl.push_back(
                        "--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.clear();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back
                        ("  The vase you\'ve got from Mark Clay\'s help you win the\nauction because it is priceless. Valkyrie also likes\nthis artwork but he couldn't own it in the past.\nSo, you get Sodalite and you get another bonus.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        money+=15;
                        cout<<"---------------------------------------------------";
                        cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                        cout<<"---------------------------------------------------\n";
                        dialogSdl.push_back("\n*****************************************************************\n");

                        dialogOut;
                    }else if(vase==0){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("*****************************************************************\n");
                        dialogSdl.push_back
                        ("      If that's not enough you won't get this crystal.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.insert(dialogSdl.begin()+5,
                        "   \nUnfortunately, you lost the bid this time. And the one who\ngot this Sodalite gem was the son of the nobleman of this city.\nIt seemed that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                        dialogOut;
                    }
                }else if(cut==0){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("*****************************************************************");
                    dialogSdl.push_back("\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                    dialogSdl.push_back("\n*****************************************************************\n");
                    dialogOut;
                    cin.ignore();
                    pressEnterSdl();
                    dialogSdl.insert(dialogSdl.begin()+2,
                    "\n ------------------------------------------------ \n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n ------------------------------------------------ \n");
                    dialogOut;
                    money+=15;
                    pressEnterSdl();
                    cout<<"---------------------------------------------------";
                    cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                    cout<<"---------------------------------------------------\n";     
                }
               
               

            }else if(answer==2){
                    dialogSdl.erase(dialogSdl.begin()+5,dialogSdl.begin()+8);
                    dialogSdl.insert(dialogSdl.begin()+5, "No?, won\'t you give it a try?\n");
                    dialogSdl.insert(dialogSdl.begin()+6,"1) Yes.\n");
                    dialogSdl.insert(dialogSdl.begin()+7,"2) No.\n");
                    dialogOut;
                    do{
                        cout<<"Your Choice: ";
                        cin>>answer;
                        if(answer!=1&&answer!=2){
                            cout<<"Wrong answer, Try again.";
                            continue;
                        }break;
                    }while(true);
                    if(answer==1){
                        if(answer==1){
                dialogSdl.erase(dialogSdl.begin()+5,dialogSdl.begin()+8);
                dialogSdl.insert(dialogSdl.begin()+5, "How much will you bid?\n");
                dialogOut;
                do{
                    cout<<"How much: ";
                    cin>>bidding;
                    if(bidding>money){
                        cout<<"You dont have enough coin.\n";
                        continue;
                    }break;
                }while(true);
                int x=rand()%100+1;
                if(x<=50) cut=1;
                else if(x>50) cut=0;
                if(cut==1){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("-----------------------------------------------------------------\n");
                    dialogSdl.push_back("\n             Someone cut more money than you have\n");
                    dialogSdl.push_back("\n-----------------------------------------------------------------\n");
                    dialogOut;
                    if(vase==1){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back("     Unfortunately, You have got a Mark Clay\'s \nVase, use this one instead to win the bidding. \n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.insert(dialogSdl.begin()+5,"\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                        sodalite=1;
                        dialogSdl.push_back(
                        "--------------------------------------------------\n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n--------------------------------------------------\n");
                        dialogOut;
                        pressEnterSdl();
                        dialogSdl.clear();
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.push_back
                        ("  The vase you\'ve got from Mark Clay\'s help you win the\nauction because it is priceless. Valkyrie also likes\nthis artwork but he couldn't own it in the past.\nSo, you get Sodalite and you get another bonus.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        money+=15;
                        cout<<"---------------------------------------------------";
                        cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                        cout<<"---------------------------------------------------\n";
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogOut;
                 

                    }else if(vase==0){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("*****************************************************************\n");
                        dialogSdl.push_back
                        ("      If that's not enough you won't get this crystal.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.insert(dialogSdl.begin()+5,
                        "   \nUnfortunately, you lost the bid this time. And the one who\ngot this Sodalite gem was the son of the nobleman of this city.\nIt seemed that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                        dialogOut;
                    }
                }else if(cut==0){
                    dialogSdl.clear();
                    system("cls");
                    dialogSdl.push_back("*****************************************************************");
                    dialogSdl.push_back("\n     You win the bid this time.\nYou get a Sodalite, the \"Crystal of Logic\"\n");
                    dialogSdl.push_back("\n*****************************************************************\n");
                    dialogOut;
                    cin.ignore();
                    pressEnterSdl();
                    dialogSdl.insert(dialogSdl.begin()+2,
                    "\n ------------------------------------------------ \n|Sodalite boost your intuition self-expression   |\n|and to calm oversensitivity, open your mind     |\n|and using you wisdom.                           |\n ------------------------------------------------ \n");
                    dialogOut;
                    money+=15;
                    pressEnterSdl();
                    cout<<"---------------------------------------------------";
                    cout<<"\nYou got 15 coins \nYour coins: "<<money<<"(+15)\n";
                    cout<<"---------------------------------------------------\n";
        
                }
                    }
               }else if(answer==2){
                    dialogSdl.clear();
                    dialogSdl.push_back("************************************\n");
                    dialogSdl.push_back("You got nothing, just keep going.\n\n");
                    dialogSdl.push_back("************************************\n");
                    dialogOut;
               }
               
            }
        }


        }
        break;
    }
    pressEnterSdl();
    dialogSdl.clear();
    dialogSdl.push_back("*****************************************************************\n");
    dialogSdl.push_back
    ("After work, everyone gradually left. But when you walk out,\nthere's no one to be found and all the lights in other stores go\n off. The manager has offered you to stay in the upstairs room of\nthe store. Will you accept the offer?\n\n");
    dialogSdl.push_back("*****************************************************************\n");
    dialogOut;
    pressEnterSdl();
    dialogSdl.push_back("-----------------------------------------------------------------\n");
    dialogSdl.push_back
    ("Will you accept the offer?\n");
    dialogSdl.push_back
    ("1) Yes.\n");
    dialogSdl.push_back
    ("2) No.\n");
    dialogSdl.push_back("-----------------------------------------------------------------\n");
    dialogOut;
    do{
        cout<<"Your Choice: ";
        cin>>answer;
        if(answer!=1&&answer!=2){
            cout<<"Wrong answer, Try again.";
            continue;
        }break;
    }while(true);
    dialogSdl.clear();
    system("cls");
    if(answer==1){
        dialogSdl.push_back("*****************************************************************\n");
        dialogSdl.push_back
        ("  You accept the offer and stay in a room on the second floor of\nthe tavern. The room is spacious and clean, with\ncomplete facilities and bed sheets.\n");
        dialogSdl.push_back("\n*****************************************************************\n");
        dialogOut;
        cin.ignore();
        pressEnterSdl();
        money-=10;
        hp-=1;
        cout<<"-----------------------------------------\n";
        cout<<"You lose 10 coins \nYour coins: "<<money<<"  (-10)\n";
        cout<<"\nYou lose 1 hp \nYour hp: "<<hp<<" (-1)\n";
        cout<<"-----------------------------------------\n";
        pressEnterSdl();
        cout<<"*****************************************************************\n";
        cout<<"In the morning, when you wake up, you feel tired, lack of sleep,\n dark eyes and exhausted. Then you leave the inn and go out the door.\n ";
        cout<<"\n*****************************************************************\n";
    }else if(answer==2){
        dialogSdl.push_back("*****************************************************************\n");
        dialogSdl.push_back
        ("  The whole city is in the dark and the gate is closed. So you\ncan only lie in front of the gate\nuntil the morning\n");
        dialogSdl.push_back("\n*****************************************************************\n");
        dialogOut;
        cin.ignore();
        pressEnterSdl();
        hp-=1;
        cout<<"-----------------------------------------\n";
        cout<<"You lose 1 hp \nYour hp: "<<hp<<" (-1)\n";
        cout<<"-----------------------------------------\n";
        pressEnterSdl();
        cout<<"*****************************************************************\n";
        cout<<"In the morning, when you wake up, you feel tired, lack of sleep,\n dark eyes and exhausted. Then you leave the inn and go out the door.\n ";
        cout<<"\n*****************************************************************\n";
    }
    pressEnterSdl();
    cout<<"****************************************************************************\n";
    cout<<"     However, when you look back, I realize that this city is a ghost town!\n";
    cout<<"\n****************************************************************************\n";
    
    pressEnterSdl();
    cout<<("*****************************************************************\n");
    cout<<("\n              LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");
    pressEnterSdl();

}

//Tester//
int main(){
    int hp,money;
    bool sodalite,vase;
    Sdl(hp,money,sodalite,vase);
    return 0;
}
 
