#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;



void wizard(int &, int&, bool &, bool &, bool &, bool &, bool &); //มอน wizard (ทุกเมือง)
void orc(int &, int&, bool &, bool &, bool &, bool &, bool &); //มอน orc (ยกเว้นเมืองแรก)
void werewolf(int &, int &, bool &, bool &, bool &, bool &, bool &); //มอน werewolf (ตั้งแต่เมือง2+)
void bandit(int &, int &, bool &, bool &, bool &, bool &, bool &); //มอน bandit (ตั้งแต่เมือง3+)
void skeletons(int &, int &, bool &, bool &, bool &, bool &, bool &); //มอน skeletons (ตั้งแต่เมือง4+)

#define dialogOutM for(auto i = dialogM.begin(); i != dialogM.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutM2 for(auto i = dialogM2.begin(); i != dialogM2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutM3 for(auto i = dialogM3.begin(); i != dialogM3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา


#define dialogOutSlowM for(auto i = dialogM.begin(); i != dialogM.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา.

vector<string> dialogM;
vector<string> dialogM2;
vector<string> dialogM3;




void pressEnterM(){ // กด Enter เปลี่ยนฉาก
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");
}


#define hpcheckM if(hp<=0){\
    pressEnterM();\
    playerLoseM();\
    pressEnterM();\
    break;\
    }\

#define moneycheckM if(money<0){\
    money=0;\
    }\

void playerLoseM(){
    cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*                   YOU LOSE!!!                       *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
}
 
void checkstone(int &stone, bool &aventurine, bool &rosequartz, bool &sodalite, bool &fluorite, bool &amethyst){
    stone=0;
    if(aventurine==1){
        stone++;
    }
    if(rosequartz==1){
        stone++;
    }
    if(sodalite==1){
        stone++;
    }
    if(fluorite==1){
        stone++;
    }
    if(amethyst==1){
        stone++;
    }
}

void skeletons(int &hp, int &money, bool &aventurine, bool &rosequartz, bool &sodalite, bool &fluorite, bool &amethyst){
    int answer,stone,rate;
    while(true){
        system("cls");

        dialogM3.push_back
        ("*****************************************************************\n");
        dialogM.push_back
        ("  While you're walking, an arrow hits you from behind. You can\ndodge in time. When you look back, you find skeletons aiming\na bow at you.\n");
        dialogM2.push_back
        ("\n*****************************************************************\n");

        dialogOutM3;
        dialogOutSlowM;
        dialogOutM2;

        dialogM.clear();
        dialogM3.push_back
        ("  While you're walking, an arrow hits you from behind. You can\ndodge in time. When you look back, you find skeletons aiming\na bow at you.\n");
        pressEnterM();
        dialogM.push_back(
        "\n   You decide to hide behind the tree to find a way to survive.\nWhat will you do?\n");

        dialogOutM3;
        dialogOutSlowM;
        dialogOutM2;

        pressEnterM();
        dialogM3.push_back(
        "\n   You decide to hide behind the tree to find a way to survive.\nWhat will you do?\n");
        dialogM2.push_back
        ("===================================================================\n");
        dialogM2.push_back
        ("What will you do? \n");
        dialogM2.push_back
        ("1) Fight. \n");
        dialogM2.push_back
        ("2) Escape.\n");
        dialogM2.push_back
        ("===================================================================\n");
        
        dialogOutM3;
        dialogOutM2;
        do
        {
            cout << "Your Choice: ";
            cin >> answer;
            if (answer != 1 && answer != 2)
            {
                cout << "Wrong answer, Try again.\n";
                continue;
            }
            break;
        } while (true);
        dialogM.clear();
        dialogM2.clear();
        dialogM3.push_back
        ("\n*****************************************************************\n");
        dialogM3.push_back
        ("===================================================================\n");
        dialogM2.push_back
        ("\n===================================================================\n");
        system("cls");
         if(answer==1){ //Fight
                bool fight;
                rate=rand()%99+1;
                checkstone(stone, aventurine, rosequartz, sodalite, fluorite, amethyst);
                if(rate<=45+(10*stone)){
                    fight=1;
                }else if(rate>45+(10*stone)){
                    fight=0;
                }
                
                if(fight==true){
                    dialogM.push_back(
                    "   You ran to skeletons and stabbed him in the back.\nThe skeletons started to fall and decomposed.\n");

                    dialogOutM3;
                    dialogOutSlowM;
                    dialogOutM2;
                    cin.ignore();
                    pressEnterM();
                    dialogM.clear();
                    

                    dialogM3.push_back(
                    "           YOU HAVE SUCCESSFULLY FOUGHT.\n");
                    dialogOutM3;
                    dialogOutM2;
                }else{
                    dialogM.push_back(
                    "   You ran to skeletons and trying to stabbed him at the back.\nBut unfortunately the skeleton shot you on the leg so you couldn't\nrun and begged him for lives.\n");

                    dialogOutM3;
                    dialogOutSlowM;
                    dialogOutM2;
                    cin.ignore();
                    pressEnterM();
                    dialogM.clear();

                    dialogM3.push_back(
                    "       YOU HAVE NOT SUCCESSFULLY FOUGHT.\n");
                    dialogOutM3;
                    dialogOutM2;
                    pressEnterM();
                    dialogM3.clear();
                    cout<<"===================================================================\n";
                    hp-=1;//
                    for (char c : "\n    You lose 1 hp \n\n    Your hp: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << hp;//
                    
                    for (char c: " (-1)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    hpcheckM;
                  
                    
                }
            }else if(answer==2){ //escape
                bool escape;
                rate=rand()%99+1;
                if(sodalite==true){
                        escape=1;
                }else{
                    if(rate>50){
                        escape=1;
                    }else if(rate<=50){
                        escape=0;
                    }
                
            }
            escape=1;
            if(escape==true){
                dialogM.push_back(
                "   You ran away but the skeleton\'s arrow still shot you in the back!");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "       YOU HAVE SUCCESSFULLY ESCAPED.");
                dialogOutM3;
                dialogOutM2;
        
                pressEnterM();
                dialogM3.clear();
                    cout<<"===================================================================\n";
                    hp-=1;//
                    for (char c : "\n    You lose 1 hp \n\n    Your hp: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << hp;//
                    
                    for (char c : " (-1)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    hpcheckM;

                    
            }else{
                dialogM.push_back(
                "   You starting to escape but suddenly skeleton\'s arrow shot you in\nthe legs. So you can't move at all!");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "       YOU HAVE NOT SUCCESSFULLY ESCAPED.");
                dialogOutM3;
                dialogOutM2;
                pressEnterM();
                dialogM3.clear();
                    cout<<"===================================================================\n";
                    hp-=2;//
                    for (char c : "\n    You lose 2 hp \n\n    Your hp: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << hp;//
                    
                    for (char c : " (-2)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    hpcheckM;
                    
                    
                    }
    }break;
    
}
pressEnterM();
    dialogM3.clear();
    dialogM.clear();
    dialogM2.clear();
    dialogM3.push_back("*****************************************************************\n");
    dialogM.push_back("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    dialogM2.push_back("*****************************************************************\n");
    dialogOutM3;
    dialogOutSlowM;
    dialogOutM2;
}

void bandit(int &hp, int &money, bool &aventurine, bool &rosequartz, bool &sodalite, bool &fluorite, bool &amethyst){
    int answer,stone,rate;
    while(true){
        system("cls");

        dialogM3.push_back
        ("*****************************************************************\n");
        dialogM.push_back
        ("  When you're sitting under a tree after a long journey, you\nsuddenly hear horses coming towards you.\n");
        dialogM2.push_back
        ("\n*****************************************************************\n");

        dialogOutM3;
        dialogOutSlowM;
        dialogOutM2;

        dialogM.clear();
        dialogM3.push_back
        ("  When you're sitting under a tree after a long journey, you\nsuddenly hear horses coming towards you.\n");
        pressEnterM();
        dialogM.push_back(
        "\n   The people sitting on the horse are bandits with bounties and\nlooted property from the previous city. What will you do?\n");

        dialogOutM3;
        dialogOutSlowM;
        dialogOutM2;

        pressEnterM();
        dialogM3.push_back(
        "\n   The people sitting on the horse are bandits with bounties and\nlooted property from the previous city. What will you do?\n");
        dialogM2.push_back
        ("===================================================================\n");
        dialogM2.push_back
        ("What will you do? \n");
        dialogM2.push_back
        ("1) Fight. \n");
        dialogM2.push_back
        ("2) Hide.\n");
        dialogM2.push_back
        ("===================================================================\n");
        
        dialogOutM3;
        dialogOutM2;
        do
        {
            cout << "Your Choice: ";
            cin >> answer;
            if (answer != 1 && answer != 2)
            {
                cout << "Wrong answer, Try again.\n";
                continue;
            }
            break;
        } while (true);
        dialogM.clear();
        dialogM2.clear();
        dialogM3.push_back
        ("\n*****************************************************************\n");
        dialogM3.push_back
        ("===================================================================\n");
        dialogM2.push_back
        ("\n===================================================================\n");
        system("cls");
         if(answer==1){ //Fight
                bool fight;
                rate=rand()%99+1;
                checkstone(stone, aventurine, rosequartz, sodalite, fluorite, amethyst);
                if(rate<=40+(10*stone)){
                    fight=1;
                }else if(rate>40+(10*stone)){
                    fight=0;
                }
                fight=1;
                if(fight==true){
                    dialogM.push_back(
                    "   You fight bandits with your bare fists. You punches them badly.\nFinally, they beg you to spares their lives.\nYou spares and let them run away.");

                    dialogOutM3;
                    dialogOutSlowM;
                    dialogOutM2;
                    cin.ignore();
                    pressEnterM();
                    dialogM.clear();
                    

                    dialogM3.push_back(
                    "           YOU HAVE SUCCESSFULLY FOUGHT.");
                    dialogOutM3;
                    dialogOutM2;
                }else{
                    dialogM.push_back(
                    "   You lose the fight with bandits. You beg them to spares your live.\nThey offer a deal to you to give them your moeny and you will live.");

                    dialogOutM3;
                    dialogOutSlowM;
                    dialogOutM2;
                    cin.ignore();
                    pressEnterM();
                    dialogM.clear();

                    dialogM3.push_back(
                    "       YOU HAVE NOT SUCCESSFULLY FOUGHT.");
                    dialogOutM3;
                    dialogOutM2;
                    pressEnterM();
                    dialogM3.clear();
                    cout<<"===================================================================\n";
                    money-=10;//
                    moneycheckM;
                    for (char c : "\n    You lose 10 coins \n\n    Your coins: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << money;//
                    
                    for (char c : " (-10)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
            
                  
                    
                }
            }else if(answer==2){ //hide
                bool hide;
                rate=rand()%99+1;
                if(sodalite==true){
                        hide=1;
                }else{
                    if(rate>60){
                        hide=1;
                    }else if(rate<=60){
                        hide=0;
                    }
                
            }
           
            if(hide==true){
                dialogM.push_back(
                "   You see a bush next to you so you decided to hide behind it.");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "       YOU HAVE SUCCESSFULLY HIDDEN.");
                dialogOutM3;
                dialogOutM2;
     
            }else{
                dialogM.push_back(
               "   You see a bush next to you so you decided to hide behind it.\nBut at the moment you starting to walk to the bush,\nthe bandits hear you footsteps and catch you immediately.\n");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "       YOU HAVE NOT SUCCESSFULLY HIDDEN.");
                dialogOutM3;
                dialogOutM2;
                pressEnterM();
                dialogM3.clear();
                    cout<<"===================================================================\n";
                    hp-=1;//
                    for (char c : "\n    You lose 1 hp \n\n    Your hp: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << hp;//
                    
                    for (char c : " (-1)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    hpcheckM;
                    
                    
                    }
    }break;
    
} 
pressEnterM();
    dialogM3.clear();
    dialogM.clear();
    dialogM2.clear();
    dialogM3.push_back("*****************************************************************\n");
    dialogM.push_back("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    dialogM2.push_back("*****************************************************************\n");
    dialogOutM3;
    dialogOutSlowM;
    dialogOutM2;
}

void werewolf(int &hp, int &money, bool &aventurine, bool &rosequartz, bool &sodalite, bool &fluorite, bool &amethyst){
    int answer,stone,rate;
    while(true){
        system("cls");

        dialogM3.push_back
        ("*****************************************************************\n");
        dialogM.push_back
        ("  In the middle of the night, when you're deciding whether to\nsleep under the rocks, you unexpectedly hear a dog howling. \n");
        dialogM2.push_back
        ("\n*****************************************************************\n");

        dialogOutM3;
        dialogOutSlowM;
        dialogOutM2;

        dialogM.clear();
        dialogM3.push_back
        ("  In the middle of the night, when you're deciding whether to\nsleep under the rocks, you unexpectedly hear a dog howling. \n");
        pressEnterM();
        dialogM.push_back(
        "\n   You look around and meet a man with a tail popping out,\nso you look up at the sky. You suddenly notice that he is a werewolf.\nWhat will you do?\n");

        dialogOutM3;
        dialogOutSlowM;
        dialogOutM2;

        pressEnterM();
        dialogM3.push_back(
        "\n   You look around and meet a man with a tail popping out,\nso you look up at the sky. You suddenly notice that he is a werewolf.\nWhat will you do?\n");
        dialogM2.push_back
        ("===================================================================\n");
        dialogM2.push_back
        ("What will you do? \n");
        dialogM2.push_back
        ("1) Escape. \n");
        dialogM2.push_back
        ("2) Fight.\n");
        dialogM2.push_back
        ("3) UNLOCK ANOTHER OPTION.\n");
        dialogM2.push_back
        ("===================================================================\n");
        
        dialogOutM3;
        dialogOutM2;
        do
        {
            cout << "Your Choice: ";
            cin >> answer;
            if (answer != 1 && answer != 2 && answer != 3)
            {
                cout << "Wrong answer, Try again.\n";
                continue;
            }
            break;
        } while (true);
        dialogM.clear();
        dialogM2.clear();
        dialogM3.push_back
        ("\n*****************************************************************\n");
        dialogM3.push_back
        ("===================================================================\n");
        dialogM2.push_back
        ("\n===================================================================\n");
        system("cls");
         if(answer==2){ //Fight
                bool fight;
                rate=rand()%99+1;
                checkstone(stone, aventurine, rosequartz, sodalite, fluorite, amethyst);
                if(rate<=40+(10*stone)){
                    fight=1;
                }else if(rate>40+(10*stone)){
                    fight=0;
                }
                
                if(fight==true){
                    dialogM.push_back(
                    "   You fight with all you\'ve got, but you are going to lose. Then you\nuse the stones to fight werewolf!\n");

                    dialogOutM3;
                    dialogOutSlowM;
                    dialogOutM2;
                    cin.ignore();
                    pressEnterM();
                    dialogM.clear();
                    

                    dialogM3.push_back(
                    "           YOU HAVE SUCCESSFULLY FOUGHT.\n");
                    dialogOutM3;
                    dialogOutM2;
                    pressEnterM();
                    dialogM3.clear();
                    cout<<"===================================================================\n";
                    money+=10;
                    moneycheckM;
                    for (char c : "\n    You got 10 coins \n\n    Your coins: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << money;//
                    
                    for (char c : " (+10)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    
                }else{
                    dialogM.push_back(
                    "   The werewolf is way much stronger than you, So you decided\nto surrender and started to run.\n");

                    dialogOutM3;
                    dialogOutSlowM;
                    dialogOutM2;
                    cin.ignore();
                    pressEnterM();
                    dialogM.clear();

                    dialogM3.push_back(
                    "       YOU HAVE NOT SUCCESSFULLY FOUGHT.\n");
                    dialogOutM3;
                    dialogOutM2;
                    pressEnterM();
                    dialogM3.clear();
                    cout<<"===================================================================\n";
                    hp-=2;//
                    for (char c : "\n    You lose 2 hp \n\n    Your hp: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << hp;//
                    
                    for (char c : " (-2)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    hpcheckM;
                  
                    
                }
            }else if(answer==1){ //escape
                bool escape;
                rate=rand()%99+1;
                if(sodalite==true){
                        escape=1;
                }else{
                    if(rate>50){
                        escape=1;
                    }else if(rate<=50){
                        escape=0;
                    }
                
            }
            escape=0;
            if(escape==true){
                dialogM.push_back(
                "   You quickly ran through the woods and never comes back again...");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "       YOU HAVE SUCCESSFULLY ESCAPED.");
                dialogOutM3;
                dialogOutM2;
        
                    
            }else{
                dialogM.push_back(
                "   You quickly starting to run. But unfortunately the werewolf\nhave catched your leg before you do the running.");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "       YOU HAVE NOT SUCCESSFULLY ESCAPED.");
                dialogOutM3;
                dialogOutM2;
                pressEnterM();
                dialogM3.clear();
                    cout<<"===================================================================\n";
                    hp-=1;//
                    for (char c : "\n    You lose 1 hp \n\n    Your hp: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << hp;//
                    
                    for (char c : " (-1)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;
                    hpcheckM;
                    
                    
               }
            }else if(answer==3){
   
                if(amethyst==1){
                dialogM.push_back(
                "   You have Amethyst stone that can remove any curses.\nYou removed the curse on that man.");
                
                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();

                dialogM3.push_back(
                "   You have Amethyst stone that can remove any curses.\nYou removed the curse on that man.\n");

                dialogM.push_back("\n   The man thanks you for your help and gives you some of his\nmoney.");


                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;

                pressEnterM();
                dialogM.clear();
                dialogM3.erase(dialogM3.end());

                dialogM3.push_back(
                "       YOU HAVE SUCCESSFULLY PASSED.");
                dialogOutM3;
                dialogOutM2;
                pressEnterM();
                dialogM3.clear();
                    cout<<"===================================================================\n";
                    money+=15;//
                    moneycheckM;
                    for (char c : "\n    You got 15 coins \n\n    Your coins: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << money;//
                    
                    for (char c : " (+15)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                    dialogOutM3;
                    dialogOutM2;

                }else{
                    dialogM.push_back(
                "   You cannot unlock other option. There is\nsomething you need to get first.");

                dialogOutM3;
                dialogOutSlowM;
                dialogOutM2;
                cin.ignore();
                pressEnterM();
                dialogM.clear();


                dialogM3.push_back(
                "     YOU HAVE DONE NOTHING AND GOT NOTHING...");
                dialogOutM3;
                dialogOutM2;
                
                }

            }break;
    }
pressEnterM();
    dialogM3.clear();
    dialogM.clear();
    dialogM2.clear();
    dialogM3.push_back("*****************************************************************\n");
    dialogM.push_back("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    dialogM2.push_back("*****************************************************************\n");
    dialogOutM3;
    dialogOutSlowM;
    dialogOutM2;
}


void orc(int &hp, int &money, bool &aventurine, bool &rosequartz, bool &sodalite, bool &fluorite, bool &amethyst){
    int answer,stone,rate;
    while(true){
        system("cls");
        dialogM.push_back
        ("*****************************************************************\n");
        dialogM.push_back
        ("  While you lose in the woods, unfortunately, you witness\nthe villagers being captured.\n");
        dialogM.push_back
        ("\n*****************************************************************\n");
        dialogOutM;
        pressEnterM();
        dialogM.insert(dialogM.begin()+2,
        "\n   When you were monitoring the situation, the orc suddenly\nnoticed you came in and shouted: \"Hostile!!!\" What will you do?\n");
        dialogOutM;
        pressEnterM();
        dialogM.push_back
        ("===================================================================\n");
        dialogM.push_back
        ("What will you do? \n");
        dialogM.push_back
        ("1) Escape. \n");
        dialogM.push_back
        ("2) Fight.\n");
        dialogM.push_back
        ("3) Negotiate. \n");
        dialogM.push_back
        ("===================================================================\n");
        dialogOutM;
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2&&answer!=3){
                cout<<"Wrong answer, Try again.\n";
                continue;
            }break;
        }while(true);
        system("cls");
        dialogM.erase(dialogM.begin()+5,dialogM.begin()+9);
        if(answer==1){ //Escape
            bool escape;
            rate=rand()%99+1;
            if(aventurine==false){
                if(rate<=20){
                    escape=1;
                }else if(rate>20){
                    escape=0;
                }
            }else{
                if(rate>60){
                    escape=1;
                }else if(rate<=60){
                    escape=0;
                }
            }
            if(escape==true){
                dialogM.insert(dialogM.begin()+5,
                "       YOU HAVE SUCCESSFULLY ESCAPED.\n");
                dialogOutM;
                cin.ignore();
            }else{
                dialogM.insert(dialogM.begin()+5,
                "       YOU HAVE NOT SUCCESSFULLY ESCAPED.\n");
                dialogOutM;
                cin.ignore();
                pressEnterM();
                    hp-=1;//
            cout<<"-----------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;
        }
    }else if(answer==2){ //Fight
        bool fight;
        rate=rand()%99+1;
        checkstone(stone, aventurine, rosequartz, sodalite, fluorite, amethyst);
        if(rate<=30+(10*stone)){
            fight=1;
        }else if(rate>30+(10*stone)){
            fight=0;
        }
        if(fight==true){
            dialogM.insert(dialogM.begin()+5,
                "       YOU HAVE SUCCESSFULLY FOUGHT.\n");
            dialogOutM;
            cin.ignore(); 
        }else{
            dialogM.insert(dialogM.begin()+5,
                "       YOU HAVE NOT SUCCESSFULLY FOUGHT.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            hp-=1;//
            cout<<"-----------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;
        }
    }else if(answer==3){ //Negotiate
        bool negotiate;
        rate=rand()%99+1;
        if(aventurine==1 || fluorite==1){
            if(rate<=80){
                negotiate=1;
            }else if(rate>80){
                negotiate=0;
            }
        }else{
            if(rate<=40){
                negotiate=1;
            }else if(rate>40){
                negotiate=0;
            }
        }
        if(negotiate==true){
            dialogM.insert(dialogM.begin()+5,
            "   You have successfully negotiate.\nYou can only help to release the captives and get the village back.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            dialogM.insert(dialogM.begin()+6,
            "\nThe villagers gives you some of their money to thanks for your help.\n");
            money+=30;//
            moneycheckM;
            dialogOutM;
            cout<<"-----------------------------------------\n";
            cout<<"You got 30 coins \nYour coins: "<<money<<"  (+30)\n";
            cout<<"-----------------------------------------\n";
            
            
        }else{
            dialogM.insert(dialogM.begin()+5,
                "     YOU HAVE NOT SUCCESSFULLY NEGOTIATE.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            hp-=1;//
            cout<<"-----------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;
        }
    
    }break;
    }
    pressEnterM();
    dialogM.clear();
    cout<<("*****************************************************************\n");
    cout<<("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");

}

void wizard(int &hp, int &money, bool &aventurine, bool &rosequartz, bool &sodalite, bool &fluorite, bool &amethyst){
    int answer, stone, rate;
    while(true){
    system("cls");
    dialogM.clear();
    system("cls");
    dialogM.push_back
    ("*****************************************************************\n");
    dialogM.push_back
    ("  When you travel through the mountain, you find a castle.\nYou are tired, so you want to have a rest. You knock on the door\nand meet a friendly old man who asks you to stay inside.\n");
    dialogM.push_back
    ("\n*****************************************************************\n");
    dialogOutM;
    pressEnterM();
    dialogM.insert(dialogM.begin()+2,
    "\n   But when you walk into the room and find a lot of human\nremains, this guy reveals that he is a wizard who wants to\ncapture you as a subject for an experiment. What will you do?\n");
    dialogOutM;
    pressEnterM();
    dialogM.push_back
    ("===================================================================\n");
    dialogM.push_back
    ("What are you gonna do? \n");
    dialogM.push_back
    ("1) Escape. \n");
    dialogM.push_back
    ("2) Fight.\n");
    dialogM.push_back
    ("3) Cast a spell. \n");
    dialogM.push_back
    ("===================================================================\n");
    dialogOutM;
    do{
        cout<<"Your Choice: ";
        cin>>answer;
        if(answer!=1&&answer!=2&&answer!=3){
            cout<<"Wrong answer, Try again.\n";
            continue;
        }break;
    }while(true);
    system("cls");
    dialogM.erase(dialogM.begin()+5,dialogM.begin()+9);
    if(answer==1){ //Escape
        bool escape;
        rate=rand()%99+1;
        if(aventurine==false){
            if(rate<=30){
                escape=1;
            }else if(rate>30){
                escape=0;
            }
        }else{
            if(rate>60){
                escape=1;
            }else if(rate<=60){
                escape=0;
            }
        }
        if(escape==true){
            dialogM.insert(dialogM.begin()+5,
                "       YOU HAVE SUCCESSFULLY ESCAPED.\n");
            dialogOutM;
            cin.ignore();
        }else{
            dialogM.insert(dialogM.begin()+5,
                "       YOU HAVE NOT SUCCESSFULLY ESCAPED.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            hp-=1;//
            cout<<"-----------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;
        }
    }else if(answer==2){ //Fight
        bool fight;
        rate=rand()%99+1;
        checkstone(stone, aventurine, rosequartz, sodalite, fluorite, amethyst);
        if(rate<=35+(10*stone)){
            fight=1;
        }else if(rate>35+(10*stone)){
            fight=0;
        }
        
        if(fight==true){
            dialogM.insert(dialogM.begin()+4,
            "   You stamps your foot on wizard\'s feet and punches him in the face.\nthe wizard start to cry and beg you for lives.\n");
            dialogM.insert(dialogM.begin()+6,
                "       YOU HAVE SUCCESSFULLY FOUGHT.\n");
            dialogOutM;
            cin.ignore();
            
        }else{
            dialogM.insert(dialogM.begin()+4,
            "   You are severely burned by wizard\'s spell. You feel terrible pain and your energy are drained out/\n");
            dialogM.insert(dialogM.begin()+6,
                "       YOU HAVE NOT SUCCESSFULLY FOUGHT.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            hp-=1;//
            cout<<"-----------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;
        }
    }else if(answer==3){ //Cast a spell
        bool cast;
        rate=rand()%99+1;
        checkstone(stone, aventurine, rosequartz, sodalite, fluorite, amethyst);
        if(sodalite==true || fluorite==true || aventurine==true){
            if(rate<=70){
                cast=1;
            }else if(rate>70){
                cast=0;
            }
        }else{
            if(rate<=20){
                cast=1;
            }else if(rate>20){
                cast=0;
            }
        }
        if(cast==true){
            dialogM.insert(dialogM.begin()+5,
                "     YOU HAVE SUCCESSFULLY CAST A SPELL.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            hp+=1;//
            money+=20;//
            moneycheckM;
            cout<<"-----------------------------------------\n";
            cout<<"You got 20 coins \nYour coins: "<<money<<"  (+20)\n";
            cout<<"-----------------------------------------\n";
            cout<<"You recover 2 hp.\nYour hp: "<<hp<<"  (+2)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;
            
        }else{
            dialogM.insert(dialogM.begin()+5,
                "    YOU HAVE NOT SUCCESSFULLY CAST A SPELL.\n");
            dialogOutM;
            cin.ignore();
            pressEnterM();
            hp-=2;//
            cout<<"-----------------------------------------\n";
            cout<<"You lose 2 hp.\nYour hp: "<<hp<<"  (-2)\n";
            cout<<"-----------------------------------------\n";
            hpcheckM;

        }
    }
    break;
    }
    pressEnterM();
    dialogM.clear();
    cout<<("*****************************************************************\n");
    cout<<("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");
}


int main(){
    int hp,money;
    bool aventurine, rosequartz, sodalite, fluorite, amethyst;
    werewolf(hp,money, aventurine, rosequartz, sodalite, fluorite, amethyst);
}


