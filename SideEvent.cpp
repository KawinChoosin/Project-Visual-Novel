#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
using namespace std;

void pressEnter(); // กด Enter เพื่อไปต่อ
void playerLose(); // เมื่อแพ้
void sideEventPeddler(int &, bool &, bool &, int &); // Function เจอพ่อค้า
void Tavern(int &, int &, int &); // Function เจอโรงเตี๊ยม
void FoundGirl(int &); // Function เจอเด็กหญิง
void FoundWoman(int &); // Function เจอหญิงสาว

#define dialogOutS for(auto i = dialogS.begin(); i != dialogS.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutS2 for(auto i = dialogS2.begin(); i != dialogS2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutS3 for(auto i = dialogS3.begin(); i != dialogS3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา


#define dialogOutSlowS for(auto i = dialogS.begin(); i != dialogS.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา.

vector<string> dialogS;
vector<string> dialogS2;
vector<string> dialogS3;


#define hpcheckS if(hp<=0){\
    pressEnter();\
    playerLose();\
    pressEnter();\
    break;\
    }\
 
#define moneycheckS if(money<0){\
    money=0;\
    }\


void pressEnter(){ // กด E nter เปลี่ยนฉาก
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");
}

void playerLose(){
	cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*                   YOU LOSE!!!                       *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
};

void sideEventPeddler(int &money, bool &aventurine, bool &fluorite, int &potion){ //เจอพ่อค้าเร่
    int answer;
    while(true){
        system("cls");
        cout << "*****************************************************************\n";
        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\n";
        cout << "*****************************************************************\n";
        if(money >= 10 && aventurine && fluorite){ //ถ้าเงินมากกว่าหรือเท่ากับ 10 มี aventurine กับ flourite
            if(money >= 30){ // ถ้าเงินมากกว่าหรือเท่ากับ 30 จะมี 3 ตัวเลือก
                cout << "-----------------------------------------------------------------\n";
                cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                cout << "1) Accept\n\n2) Convince the peddler for discount\n\n3) Decline\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "Your Choice: ";
                do{
                    cin>>answer;
                    if(answer!=1&&answer!=2&&answer!=3){
                        continue;
                    }break;
                }while(true);
                if(answer == 1){ // ถ้า accept -money +potion
                    system("cls");
                    money -= 30;
                    moneycheckS;
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    potion += 1;
                    break;
                }if(answer == 2){ // ถ้า convince ต้องสุ่ม โอกาส70%
                    int x = (rand() % 100) + 1;
                    if(x <= 70){ // ถ้าสุ่มได้ ได้ราคา 10 coins
                        system("cls");
                        money -= 10;
                        moneycheckS;
                        
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou convince the peddler to buy a potion for 10 coins.\nThe power of Aventurine make your charisma improved and \nthe power of Fluorite make you found the deal weakness. \nThe peddler accept the deal.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        potion += 1;
                        break;
                    }else{ // ถ้าสุ่มไม่ได้ จะมีให้เลือกว่าจะซื้อราคาเต็มหรือไม่ซื้อ
                        while(true){
                            system("cls");
                            cout << "*****************************************************************\n";
                            cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou try to convince the peddler to buy a potion for 10 coins,\nbut he seems not satisfied and insists to sell for 30 coins.\n";
                            cout << "\n*****************************************************************\n";
                            cout << "-----------------------------------------------------------------\n";
                            cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                            cout << "1) Accept\n\n2) Decline\n";
                            cout << "-----------------------------------------------------------------\n";
                            cout << "Your Choice: ";
                            do{
                                cin>>answer;
                                if(answer!=1&&answer!=2){
                                    continue;
                                }break;
                            }while(true);
                            if(answer == 1){ // ถ้าซื้อราคาเต็ม เงิน -30
                                money -= 30;
                                moneycheckS;
                                system("cls");
                                cout << "*****************************************************************\n";
                                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                                cout << "\nYou continue the journey.\n";
                                cout << "\n*****************************************************************\n";
                                potion += 1;
                                break;
                            }if(answer == 2){ // ถ้าไม่ซื้อ เดินทางต่อ
                                system("cls");
                                cout << "*****************************************************************\n";
                                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                                cout << "\nYou continue the journey.\n";
                                cout << "\n*****************************************************************\n";
                                break;
                            }
                        }break;
                    }
                }if(answer == 3){ // ไม่ซื้อเลย เดินทางต่อ
                    system("cls");
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    break;
                }
            }else{ //ถ้าเงินน้อยกว่า 30 มี aventurine กับ flourite จะมี 2 ตัวเลือก
                cout << "-----------------------------------------------------------------\n";
                cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                cout << "1) Convince the peddler for discount\n\n2) Decline\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "Your Choice: ";
                do{
                    cin>>answer;
                    if(answer!=1&&answer!=2){
                        continue;
                    }break;
                }while(true);
                if(answer == 1){ // ถ้าเลือก convince จะสุ่ม โอกาส70%
                    int x = (rand() % 100) + 1;
                    if(x <= 70){ // ถ้าสุ่มได้ ได้ราคา 10 coins
                        system("cls");
                        money -= 10;
                        moneycheckS;
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou convince the peddler to buy a potion for 10 coins.\nThe power of Aventurine make your charisma improved.\nThe peddler accept the deal.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        potion += 1;
                        break;
                    }else{ // ถ้าสุ่มไม่ได้ เดินทางต่อทันที
                        system("cls");
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 10 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        break;
                    }
                }if(answer == 2){ // ไม่ซื้อ เดินทางต่อ
                    system("cls");
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou don't have enough coins.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    break;
                }
            }
        }else if(money >= 20 && aventurine){ //ถ้าเงินมากกว่าหรือเท่ากับ 20 มี aventurine
            if(money >= 30){ // ถ้าเงินมากกว่าหรือเท่ากับ 30 จะมี 3 ตัวเลือก
                cout << "-----------------------------------------------------------------\n";
                cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                cout << "1) Accept\n\n2) Convince the peddler for discount\n\n3) Decline\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "Your Choice: ";
                do{
                    cin>>answer;
                    if(answer!=1&&answer!=2&&answer!=3){
                        continue;
                    }break;
                }while(true);
                if(answer == 1){ // ถ้าซื้อเลย เงิน-30 potion +1
                    system("cls");
                    money -= 30;
                    moneycheckS;
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    potion += 1;
                    break;
                }if(answer == 2){ // เลือก convince จะสุ่มโอกาส 70%
                    int x = (rand() % 100) + 1;
                    if(x <= 70){ // สุ่มได้เงิน -20 potion +1
                        system("cls");
                        money -= 20;
                        moneycheckS;
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou convince the peddler to buy a potion for 20 coins.\nThe power of Aventurine make your charisma improved.\nThe peddler accept the deal.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        potion += 1;
                        break;
                    }else{ // สุ่มไม่ได้ จะมีให้เลือกว่าจะซื้อราคาเต็มหรือไม่ซื้อ
                        while(true){
                            system("cls");
                            cout << "*****************************************************************\n";
                            cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n";
                            cout << "\n*****************************************************************\n";
                            cout << "-----------------------------------------------------------------\n";
                            cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                            cout << "1) Accept\n\n2) Decline\n";
                            cout << "-----------------------------------------------------------------\n";
                            cout << "Your Choice: ";
                            do{
                                cin>>answer;
                                if(answer!=1&&answer!=2){
                                    continue;
                                }break;
                            }while(true);
                            if(answer == 1){ // ซื้อราคาเต็ม เงิน -30 potion +1
                                money -= 30;
                                moneycheckS;
                                system("cls");
                                cout << "*****************************************************************\n";
                                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                                cout << "\nYou continue the journey.\n";
                                cout << "\n*****************************************************************\n";
                                potion += 1;
                                break;
                            }if(answer == 2){ // ไม่ซื้อ เดินทางต่อ
                                system("cls");
                                cout << "*****************************************************************\n";
                                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                                cout << "\nYou continue the journey.\n";
                                cout << "\n*****************************************************************\n";
                                break;
                            }
                        }break;
                    }
                }if(answer == 3){ // ไม่ซื้อ เดินทางต่อ
                    system("cls");
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    break;
                }
            }else{ // ถ้าเงินน้อยกว่า 30 จะมี 2 ตัวเลือก
                cout << "-----------------------------------------------------------------\n";
                cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                cout << "1) Convince the peddler for discount\n\n2) Decline\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "Your Choice: ";
                do{
                    cin>>answer;
                    if(answer!=1&&answer!=2){
                        continue;
                    }break;
                }while(true);
                if(answer == 1){ // เลือก convince สุ่มโอกาส70%
                    int x = (rand() % 100) + 1;
                    if(x <= 70){ // สุ่มได้ ได้ราคา 20 coins เงิน-20 potion+1
                        system("cls");
                        money -= 20;
                        moneycheckS;
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou convince the peddler to buy a potion for 20 coins.\nThe power of Aventurine make your charisma improved.\nThe peddler accept the deal.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        potion += 1;
                        break;
                    }else{ //สุ่มไม่ได้ เงินไม่พอ เดินทางต่อ
                        system("cls");
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        break;
                    }
                }if(answer == 2){ // ไม่ซื้อ เดินทางต่อ
                    system("cls");
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou don't have enough coins.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    break;
                }
            }
        }else if(money >= 20 && fluorite){ // ถ้าเงินมากกว่าหรือเท่ากับ 20 มี fluorite
            if(money >= 30){ // ถ้าเงินมากกว่าหรือเท่ากับ 30 จะมี 3 ตัวเลือก
                cout << "-----------------------------------------------------------------\n";
                cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                cout << "1) Accept\n\n2) Convince the peddler for discount\n\n3) Decline\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "Your Choice: ";
                do{
                    cin>>answer;
                    if(answer!=1&&answer!=2){
                        continue;
                    }break;
                }while(true);
                if(answer == 1){ // ถ้า accept เงิน -30 potion +1
                    system("cls");
                    money -= 30;
                    moneycheckS;
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    potion += 1;
                    break;
                }if(answer == 2){ // ถ้า convince จะสุ่มโอกาส70%
                    int x = (rand() % 100) + 1;
                    if(x <= 70){ // สุ่มได้ ได้ราคา 20 coins เงิน -20 potion +1
                        system("cls");
                        money -= 20;
                        moneycheckS;
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou convince the peddler to buy a potion for 20 coins.\nThe power of Fluorite make you found the deal's weakness point.\nYou use it against the peddler. He accept the deal unwillingly.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        potion += 1;
                        break;
                    }else{ // สุ่มไม่ได้ มีให้เลือกซื้อราคาเต็มกับไม่ซื้อ
                        while(true){
                            system("cls");
                            cout << "*****************************************************************\n";
                            cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n";
                            cout << "\n*****************************************************************\n";
                            cout << "-----------------------------------------------------------------\n";
                            cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                            cout << "1) Accept\n\n2) Decline\n";
                            cout << "-----------------------------------------------------------------\n";
                            cout << "Your Choice: ";
                            do{
                                cin>>answer;
                                if(answer!=1&&answer!=2){
                                    continue;
                                }break;
                            }while(true);
                            if(answer == 1){ // ซื้อราคาเต็ม เงิน -30 potion +1
                                money -= 30;
                                moneycheckS;
                                system("cls");
                                cout << "*****************************************************************\n";
                                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                                cout << "\nYou continue the journey.\n";
                                cout << "\n*****************************************************************\n";
                                potion += 1;
                                break;
                            }if(answer == 2){ // ไม่ซื้อ เดินทางต่อ
                                system("cls");
                                cout << "*****************************************************************\n";
                                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                                cout << "\nYou continue the journey.\n";
                                cout << "\n*****************************************************************\n";
                                break;
                            }
                        }break;
                    }
                }if(answer == 3){ // ไม่ซื้อ เดินทางต่อ
                    system("cls");
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    break;
                }
            }else{ // ถ้าเงินน้อยกว่า 30 จะมี 2 ตัวเลือก
                cout << "-----------------------------------------------------------------\n";
                cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
                cout << "1) Convince the peddler for discount\n\n2) Decline\n";
                cout << "-----------------------------------------------------------------\n";
                cout << "Your Choice: ";
                do{
                    cin>>answer;
                    if(answer!=1&&answer!=2){
                        continue;
                    }break;
                }while(true);
                if(answer == 1){ // เลือก convince จะสุ่มโอกาส70%
                    int x = (rand() % 100) + 1;
                    if(x <= 70){ // สุ่มได้ ได้ราคา 20 coins เงิน -20 potion +1
                        system("cls");
                        money -= 20;
                        moneycheckS;
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou convince the peddler to buy a potion for 20 coins.\nThe power of Aventurine make your charisma improved.The peddler accept the deal.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        potion += 1;
                        break;
                    }else{ // สุ่มไม่ได้ เงินไม่พอ เดินทางต่อ
                        system("cls");
                        cout << "*****************************************************************\n";
                        cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\nYou try to convince the peddler to buy a potion for 20 coins, \nbut he seems not satisfied and insists to sell for 30 coins.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                        cout << "\nYou continue the journey.\n";
                        cout << "\n*****************************************************************\n";
                        break;
                    }
                }if(answer == 2){ // ไม่ซื้อ เดินทางต่อ
                    system("cls");
                    cout << "*****************************************************************\n";
                    cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou don't have enough coins.\n\nYour coins: " << money << "\n";
                    cout << "\nYou continue the journey.\n";
                    cout << "\n*****************************************************************\n";
                    break;
                }
            }
        }else if(money >= 30){ // ถ้าเงินมากกว่า 30 จะมี 2 ตัวเลือก ซื้อราคาเต็มกับไม่ซื้อ
            cout << "-----------------------------------------------------------------\n";
            cout << "Will you accept the offer?" << "(Your coins: " << money << ")\n\n";
            cout << "1) Accept\n\n2) Decline\n";
            cout << "-----------------------------------------------------------------\n";
            cout << "Your Choice: ";
            do{
                cin>>answer;
                if(answer!=1&&answer!=2){
                    continue;
                }break;
            }while(true);
            if(answer == 1){ // ถ้าซื้อราคาเต็ม เงิน-30 potion +1
                system("cls");
                money -= 30;
                moneycheckS;
                cout << "*****************************************************************\n";
                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou accept the buy, your coin -30.\n\nYour coins: " << money << "\n";
                cout << "\nYou continue the journey.\n";
                cout << "\n*****************************************************************\n";
                potion += 1;
                break;
            }if(answer == 2){ // ถ้าไม่ซื้อ เดินทางต่อ
                system("cls");
                cout << "*****************************************************************\n";
                cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou decline the offer.\n\nYour coins: " << money << "\n";
                cout << "\nYou continue the journey.\n";
                cout << "\n*****************************************************************\n";
                break;
            }
        }else{ // เงินไม่พอ เดินทางต่อ
            system("cls");
            cout << "*****************************************************************\n";
            cout << "While you're leaving the town, you meet a\npeddler. He offers a potion to you, which is 30 coins cost.\n\nYou don't have enough coins.\n\nYour coins: " << money << "\n";
            cout << "\nYou continue the journey.\n";
            cout << "\n*****************************************************************\n";
            break;
        }
    }
    cin.ignore();
    pressEnter(); // กด enter เพื่อเปลี่ยนฉาก
}


void Tavern(int &money, int &hp, int &maxhp){ // เจอโรงเตี๊ยม
    int answer;
    while(true){
        system("cls");
        dialogS3.push_back
        ("*****************************************************************\n");
        dialogS.push_back(
        "After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n");
        dialogS2.push_back("\n*****************************************************************\n");

        dialogOutS3;
        dialogOutSlowS;
        dialogOutS2;
        dialogS.clear();
        dialogS2.clear();

        pressEnter();
        dialogS3.push_back
        ("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n");
        dialogS3.push_back("\n*****************************************************************\n");

        money-=10;//
                    moneycheckS;
                    for (char c : "\nYour coins: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
                        cout << money;//
                    
                    for (char c : "\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }

                    pressEnter();
                    
                    
            


        
        money=2;
        if(money >= 20){ // ถ้าเงินมากกว่าหรือเท่ากับ 20 จะมี 2 ตัวเลือก
            system("cls");

            dialogS3.push_back("-----------------------------------------------------------------\n");
            dialogS3.push_back("Will you accept the offer?\n");
            dialogS3.push_back("1) Accept.\n2) Decline.\n");
            dialogS3.push_back("-----------------------------------------------------------------\n");
            dialogOutS3;
            dialogOutS2;
            
            do
            {
            
            cout<<"Your Choice: ";
            cin >> answer;
            if (answer != 1 && answer != 2)
            {
                cout << "Wrong answer, Try again.\n";
                continue;
            }
            break;
            } while (true);
            dialogS3.clear();
            if(answer == 1){ // ถ้า accept เงิน-20 hp +1
                system("cls");
                money -= 20;
                moneycheckS;
                hp += 1;//
                pressEnter();
                dialogS2.clear();
                dialogS3.push_back("*****************************************************************\n");
                dialogS.push_back("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n\n");
                dialogS2.push_back("*****************************************************************\n");

                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                pressEnter();
                dialogS3.push_back("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n\n");

                dialogS.push_back("You accept to rest in a tavern. Your coin -20. The\nroom is so comfortable, so you sleep very well. In the \nnext morning, you wake up freshly and ready to go on.\n");
                
                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                pressEnter();
                cout<<"\n*****************************************************************\n";
                cout << "\nYour coins: " << money << "(-20)\n";
                if(hp < maxhp) cout << "Your HP: " << hp << "(+1)\n";
                cout << "\nYou continue the journey.\n";
                cout << "\n*****************************************************************\n";
                hpcheckS;
                break;
            }else if(answer == 2){ // ถ้า decline พักใต้ต้นไม้แล้วเดินทางต่อ
                pressEnter();
                dialogS3.push_back("*****************************************************************\n");
                dialogS.push_back("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n\n");
                dialogS2.push_back("*****************************************************************\n");

                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                pressEnter();

                dialogS3.push_back("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n\n");

                dialogS.push_back("You decline to rest in a tavern. So you walk all night and sleep under the tree that is not quite comfy.\n");
                
                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                pressEnter();
                
                dialogS3.push_back("You decline to rest in a tavern. So you walk all night and sleep under the tree that is not quite comfy.\n");
                dialogS.push_back("\nYou continue the journey in the morning.\n");

                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                
                break;
            }
        }else{ // ถ้าเงินน้อยกว่า 20 จะมี 1 ตัวเลือก
            system("cls");
            dialogS3.push_back("-----------------------------------------------------------------\n");
            dialogS3.push_back("Will you accept the offer?\n");
            dialogS3.push_back("1) Decline\n");
            dialogS2.push_back("-----------------------------------------------------------------\n");
            dialogOutS3;
            dialogOutS2;
            do
            {
            
            cout<<"Your Choice: ";
            cin >> answer;
            if (answer != 1 && answer != 2)
            {
                cout << "Wrong answer, Try again.\n";
                continue;
            }
            break;
            } while (true);
            dialogS3.clear();
            if(answer == 1){ // บังคับ decline เพราะเงินไม่พอ
                pressEnter();
                dialogS3.push_back("*****************************************************************\n");
                dialogS.push_back("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n\n");
                dialogS2.push_back("*****************************************************************\n");

                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                pressEnter();

                dialogS3.push_back("After traveling for a while, the sun begin to set, then you\nfound a tavern. You are tired from the journey, so you decide to get\nin there then tavern's owner come and welcome you. You ask the him\nif you want to stay here for a night. The owner offer to let you\nstay for 20 coins.\n\n");

                dialogS.push_back("\nYou continue the journey in the morning.\n");

                dialogOutS3;
                dialogOutSlowS;
                dialogOutS2;
                dialogS.clear();
                
                break;
            }
        }
    }
    cin.ignore();
    pressEnter(); // กด enter เพื่อเปลี่ยนฉาก
}


void FoundGirl(int &money){ // เจอเด็กสาว
    int answer;
    while(true){
        system("cls");
        cout << "*****************************************************************\n";
        cout << "While you are walking along the way, a girl approaches you \n\"My cart got stuck, my good man. Could you please give me a hand?\"\nshe says.\n";
        cout << "\n*****************************************************************\n";
        cout << "-----------------------------------------------------------------\n";
        cout << "What will you do?\n\n";
        cout << "1) Help the girl\n\n2) Ignore and keep going\n";
        cout << "-----------------------------------------------------------------\n";
        cout << "Your Choice: ";
        do{
                cin>>answer;
                if(answer!=1&&answer!=2){
                    continue;
                }break;
        }while(true);
        if(answer == 1){ // ช่วย เงิน +10
            system("cls");
            cout << "*****************************************************************\n";
            cout << "While you are walking along the way, a girl approaches you \n\"My cart got stuck, my good man. Could you please give me a hand?\"\nshe says.\n\n";
            cout << "You help the girl who is the daughter of some rich man in a village nearby.\nShe is really grateful to you, so she gives you some coins for helping her.\n";
            money += 10;
            moneycheckS;
            cout << "\nYour coins: " << money << "(+10)\n";
            cout << "\nYou continue your journey.\n";
            cout << "\n*****************************************************************\n";
            break;
        }if(answer == 2){ // ไม่ช่วย เดินทางต่อ
            system("cls");
            cout << "*****************************************************************\n";
            cout << "While you are walking along the way, a girl approaches you \n\"My cart got stuck, my good man. Could you please give me a hand?\"\nshe says.\n\n";
            cout << "You have too many things to do and don't want to waste you time, \nso you decide to ignore her and keep moving.\n";
            cout << "\n*****************************************************************\n";
            break;
        }
    }
    cin.ignore();
    pressEnter();
}


void FoundWoman(int &hp){ // เจอหญิงสาวขอความช่วยเหลือ
    int answer;
    while(true){
        system("cls");
        cout << "*****************************************************************\n";
        cout << "While you are walking along the way, a woman approaches you \n\"My cart got stuck, my lord. Could you please give me a hand?\"\nshe says.\n";
        cout << "\n*****************************************************************\n";
        cout << "-----------------------------------------------------------------\n";
        cout << "What will you do?\n\n";
        cout << "1) Help the woman\n\n2) Ignore and keep going\n";
        cout << "-----------------------------------------------------------------\n";
        cout << "Your Choice: ";
        do{
                cin>>answer;
                if(answer!=1&&answer!=2){
                    continue;
                }break;
        }while(true);
        if(answer == 1){ // ช่วย hp -1
            system("cls");
            cout << "*****************************************************************\n";
            "While you are walking along the way, a woman approaches you \n\"My cart got stuck, my lord. Could you please give me a hand?\"\nshe says.\n";
            cout << "You decide to help the woman. But when you are pushing the cart,\n\"Now!!\" she shout loudly. You see a group of bandits hiding\n in the sideways. You throw a rock to the front\n of the cart to distract them and run as fast as you can.\n Unfortunately you are injured by ambushing\n";

            hp -= 1;
            cout << "\nYour HP: " << hp << "(-1)\n";
            cout << "\n*****************************************************************\n";
            hpcheckS;
            break;
        }if(answer == 2){ // ไม่ช่วย เดินทางต่อ
            system("cls");
            cout << "*****************************************************************\n";
            "While you are walking along the way, a woman approaches you \n\"My cart got stuck, my lord. Could you please give me a hand?\"\nshe says.\n";
            cout << "You have too many things to do and don't want to waste you time, \nso you decide to ignore her and keep moving.\n";
            cout << "\n*****************************************************************\n";
            break;
        }
    }
    cin.ignore();
    pressEnter();
}