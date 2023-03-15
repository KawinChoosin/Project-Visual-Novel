#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
//ffff
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

void pressEnterEnd(){ // กด Enter เปลี่ยนฉาก.
    cout << "\nPress Enter to continue...";
    cin.get();
    system("cls");
}

int countgem=0;
void checkgem(bool &aventurine,bool &quartz,bool &sodalite,bool &fluorite,bool &amethyst){
    if(aventurine) countgem++;
    if(quartz) countgem++;
    if(sodalite) countgem++;
    if(fluorite) countgem++;
    if(amethyst) countgem++;
}

void End(bool &g1,bool &g2,bool &g3,bool &g4,bool &g5){
    int answer, con;
        system("cls");
        dialogAvn3.push_back("*****************************************************************\n");
        dialogAvn.push_back("   You have arrived at a huge limestonemountain. Inside the mountain,\nthere is a dragon cave which is full of dim, humid air,and there is a torch along the way. \nWhen you reach the center of the cave, you see the dragon open its eyes staring at you. \nIt stands up and spews fire around. Then the battle begins");
        dialogAvn2.push_back("\n*****************************************************************\n");
        dialogAvn2.push_back(
                 "                                     (`-..________....---''  ____..._.-`\n"
                 "                                     \\\\`._______.._,.---'''     ,'\n"
                 "                                      ; )`).      __..-'`-.      /\n"
                 "                                      / /     _.-' _,.;;._ `-._,'\n"
                 "                                      / /   ,-' _.-'  //   ``--._``._\n"
                 "                                     ,','_.-' ,-' _.- (( =-    -. `-._`-._____\n"
                 "                                   ,;.''__..-'   _..--.\\\\.--'````--.._``-.`-._`.\n"
                 "       _          |\\\\,' .-''        ```-'`---'`-...__,._  ``-.`-.`-.`.\n"
                 "      ,',)---' /|)          `     `      ``-.   `     /     /     `     `-.\n"
                 "      \\\\_____--.  '`  `               __..-.  \\\\     . (   < _...-----..._   `.\n"
                 "       \\\\_,--..__. \\\\ .-`.\\\\----'';``,..-.__ \\\\  \\      ,`_. `.,-'`--'`---''`.  )\n"
                 "                `.\\\\`.\\\\  `_.-..' ,'   _,-..'  /..,-''(, ,' ; ( _______`___..'__\n"
                 "                        ((,(,__(    ((,(,__,'  ``'-- `'`.(\\\\  `.,..______   --\n"
                 "                                                            ``--------..._``--.__\n \n-----------------------------------------------------------------\n");
        dialogOutAvn3;
        dialogOutSlowAvn;
        dialogOutAvn2;
        dialogAvn.clear();
        dialogAvn2.clear();
        dialogAvn3.clear();
        dialogAvn.push_back("It's time now !!!! The great dragon which destroy our kingdom is in front of us !!! \nTime to show our power to defeat our enemy !!! Then, our hero create a enormous power to defeat the dragon !!!! \n");
        dialogOutSlowAvn;
        dialogAvn.clear();
        checkgem(g1,g2,g3,g4,g5);    
            for(int i=0;i<2;i++){
                int y=countgem*15;
                int x=rand()%100+1;
                if(x<=y){
                    dialogAvn.push_back("His willpower and crystal power lead him to victory and bring peace to the kingdom.");
                    dialogOutSlowAvn;
                    dialogAvn.clear();  
                    system("cls");
                    if(g1) dialogAvn.push_back("\n\nAt the Bibury. After you break the magic of the dragon, the gap on the bridge seems\nto be narrower. Dwarves can cross over to the other side of the city and repair bridges.\nThen they resume their normal life and nolonger need to fear dragons.");
                    if(g2) dialogAvn.push_back("\n\nAvalon is still a beautiful city and the ceramicist continues his work, but no longer\nhas to deliver vases, teapots or other ceramic works to the dragons. His work is a \nliving legend and everybody desires.");
                    if(g3) dialogAvn.push_back("\n\nValhalla, known as a ghost town still exists and the tavern still accommodates many\nguests, both human and inhuman, with different auctions taking place each night.\nYou hope that no one strays into a city that is not a city of human.");
                    if(g4) dialogAvn.push_back("\n\nIn this quiet city, El dorado, priests continue to practice and teach disciples who come to\nstudy in the hope of achieving nirvana. Without them, they would no longer have \nto be servants of the dragon.");
                    if(g5) dialogAvn.push_back("\n\nIn Shangri La, people live their lives normally. The bread shop is still well-selling and\nfamous in many cities. Everyone must come to eat. Moreover, that mysterious tea shop \nhas disappeared like no one has ever seen it.Maybe one day that old man will run \na tea shop next to your house. Don't forget to keep an eye on your surroundings.");
                    dialogOutSlowAvn;                   
                    dialogAvn.clear();
                    pressEnterEnd();  
                    system("cls");
                    break;
                }else{
                    dialogAvn.push_back("Holy crap! My attack is missed. How can it be?\nAnd then, the dragon spits the flame from its mouth.\n ");
                    if(y>=45 && i<1){
                        dialogAvn.push_back("Because of the crystal's power, they make you survive \nthe dragon's flame and encounter attack.\n");
                        dialogOutSlowAvn;
                        dialogAvn.clear();
                        pressEnterEnd();
                        continue;
                    }else{
                        dialogAvn.push_back("Our hero shields the people behind him with his body. \nThe flame is scorching until his body returns to ashes.\nKingdom loses hope and waits for the new hero to be reborn.\nMaybe it's you.");
                        dialogOutSlowAvn;
                        dialogAvn.clear();
                        pressEnterEnd();
                        break;
                        }

                }
                
            }
        }

int main(){
    bool g1 = true, g2 = true, g3 = 1, g4 = 1, g5 = 1;
    End(g1,g2,g3,g4,g5);
}



