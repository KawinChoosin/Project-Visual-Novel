#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
//ffff
using namespace std;

#define dialogOutEnd for(auto i = dialogEnd.begin(); i != dialogEnd.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutEnd2 for(auto i = dialogEnd2.begin(); i != dialogEnd2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutEnd3 for(auto i = dialogEnd3.begin(); i != dialogEnd3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowEnd for(auto i = dialogEnd.begin(); i != dialogEnd.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา.

vector<string> dialogEnd;
vector<string> dialogEnd2;
vector<string> dialogEnd3;

void pressEnterEnd(){ // กด Enter เปลี่ยนฉาก.
    cout << "Press Enter to continue...";
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
        dialogEnd3.push_back("*****************************************************************\n");
        dialogEnd.push_back("   You have arrived at a huge limestonemountain. Inside the mountain,\nthere is a dragon cave which is full of dim, humid air,and there is a torch along the way. \nWhen you reach the center of the cave, you see the dragon open its eyes staring at you. \nIt stands up and spews fire around. Then the battle begins\n");
        dialogEnd2.push_back(
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
        dialogOutEnd3;
        dialogOutSlowEnd;
        dialogOutEnd2;
        dialogEnd.clear();
        dialogEnd2.clear();
        dialogEnd3.clear();
        dialogEnd.push_back("It's time now !!!! The great dragon which destroy our kingdom is in front of us !!! \nTime to show our power to defeat our enemy !!! Then, our hero create a enormous power to defeat the dragon !!!! \n");
        dialogOutSlowEnd;
        dialogEnd.clear();
        checkgem(g1,g2,g3,g4,g5);   
        int i = 0; 
            while(i < 2){
                int y=countgem*15;
                int x=rand()%100+1;
                if(x<=y){
                    dialogEnd.push_back("His willpower and crystal power lead him to victory and bring peace to the kingdom.");
                    dialogOutSlowEnd;
                    dialogEnd.clear();  
                    system("cls");
                    if(g1) dialogEnd.push_back("\n\nAt the Bibury. After you break the magic of the dragon, the gap on the bridge seems\nto be narrower. Dwarves can cross over to the other side of the city and repair bridges.\nThen they resume their normal life and nolonger need to fear dragons.");
                    if(g2) dialogEnd.push_back("\n\nAvalon is still a beautiful city and the ceramicist continues his work, but no longer\nhas to deliver vases, teapots or other ceramic works to the dragons. His work is a \nliving legend and everybody desires.");
                    if(g3) dialogEnd.push_back("\n\nValhalla, known as a ghost town still exists and the tavern still accommodates many\nguests, both human and inhuman, with different auctions taking place each night.\nYou hope that no one strays into a city that is not a city of human.");
                    if(g4) dialogEnd.push_back("\n\nIn this quiet city, El dorado, priests continue to practice and teach disciples who come to\nstudy in the hope of achieving nirvana. Without them, they would no longer have \nto be servants of the dragon.");
                    if(g5) dialogEnd.push_back("\n\nIn Shangri La, people live their lives normally. The bread shop is still well-selling and\nfamous in many cities. Everyone must come to eat. Moreover, that mysterious tea shop \nhas disappeared like no one has ever seen it.Maybe one day that old man will run \na tea shop next to your house. Don't forget to keep an eye on your surroundings.");
                    dialogOutEnd3;
                    dialogOutSlowEnd;   
                    cout << "\n*****************************************************************\n";               
                    dialogEnd.clear();
                    pressEnterEnd();  
                    system("cls");
                    break;
                }else{
                    dialogEnd.push_back("Holy crap! My attack is missed. How can it be?\nAnd then, the dragon spits the flame from its mouth.\n ");
                    if(y>=45 && i<1){
                        dialogEnd.push_back("Because of the crystal's power, they make you survive \nthe dragon's flame and encounter attack.\n");
                        dialogOutSlowEnd;
                        cout << "\n*****************************************************************\n"; 
                        dialogEnd.clear();
                        pressEnterEnd();
                        i++;
                    }else{
                        dialogEnd.push_back("Our hero shields the people behind him with his body. \nThe flame is scorching until his body returns to ashes.\nKingdom loses hope and waits for the new hero to be reborn.\nMaybe it's you.");
                        dialogOutSlowEnd;
                        cout << "\n*****************************************************************\n"; 
                        dialogEnd.clear();
                        pressEnterEnd();
                        break;
                    }

                }
                
            }
        }

