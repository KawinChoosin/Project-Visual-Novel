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
    int answer, con;
    while(true){
        system("cls");
        dialogSdl.push_back
        ("*****************************************************************\n");
        dialogSdl.push_back
        ("  In the twilight you The sun was about to set after a long \njourney. You passed by a town that looked quiet outside. No\n one was passing by at all. surrounded by large mountains and\nthere was only a dim torch light in front of the city gate. \n");
        dialogSdl.push_back
        ("\n*****************************************************************\n");
        dialogSdl.push_back("-----------------------------------------------------------------\n");
        dialogSdl.push_back("Are you going in? ");
        dialogSdl.push_back("\n1) Yes.");
        dialogSdl.push_back("\n2) No.\n");
        dialogSdl.push_back("-----------------------------------------------------------------\n");
        dialogSdl.push_back("Your Choice: ");
        dialogOut;
        cin>>answer;
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
                        pressEnterSdl();
                        dialogOut;
                        system("cls");

                    }else if(vase==0){
                        cin.ignore();
                        pressEnterSdl();
                        dialogSdl.push_back("*****************************************************************\n");
                        dialogSdl.push_back
                        ("      If that's not enough you won't get this crystal.\n");
                        dialogSdl.push_back("\n*****************************************************************\n");
                        dialogSdl.insert(dialogSdl.begin()+5,
                        "   \nUnfortunately, you lost the bid this time. And the one who\ngot this Sodalite gem was the son of the nobleman of this city.\nIt seemed that she would really like this gem and wouldn't\nlet anyone but her own it anymore.\n");
                        pressEnterSdl();
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
                    pressEnterSdl();
        
                }
               }else if(answer==2){
                
               }
           }
    }
}

int main(){
    int hp, money=10;
    bool sodalite,vase=1;
    Sdl(hp,money,sodalite,vase);
}