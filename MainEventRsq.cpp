#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

string name,thing;

#define dialogOut for(auto i = dialogRsq.begin(); i != dialogRsq.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOut2 for(auto i = dialogRsq2.begin(); i != dialogRsq2.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOut3 for(auto i = dialogRsq3.begin(); i != dialogRsq3.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowRsq for(auto i = dialogRsq.begin(); i != dialogRsq.end(); i++) { \
                      for (char c : *i) { \
                        cout << c; \
                        this_thread::sleep_for(chrono::milliseconds(50)); \
                    } \
                  } // #define ให้ cout dialog ออกมา.

vector<string> dialogRsq;
vector<string> dialogRsq2;
vector<string> dialogRsq3;

void pressEnterRsq(){
    cout<<"Press Enter to continue...";
    cin.get();
    system("cls");
}

void Rsq(int &hp, int &money, bool &rosequartz, bool &vase){
    int answer, con;
    while(true){
        system("cls");
        dialogRsq3.push_back("*****************************************************************\n");
        dialogRsq.push_back("    You have travelled until you arrive at the city of Avalon. It is \nsurrounded by trees, meadows, houses, lush green fields and wide fields\nas far as the eye can see.When you enter the city center, you will find\nMark Clay\'s ceramic shop. He is a very famous ceramicist. His work is\nknown for its beauty, unique, high quality and great value which is\nsuitable for gifts, souvenirs.\n");
        dialogRsq2.push_back("\n*****************************************************************\n");
        dialogOut3;
        dialogOutSlowRsq;
        dialogOut2;
        dialogRsq3.push_back("    You have travelled until you arrive at the city of Avalon. It is \nsurrounded by trees, meadows, houses, lush green fields and wide fields\nas far as the eye can see.When you enter the city center, you will find\nMark Clay\'s ceramic shop. He is a very famous ceramicist. His work is\nknown for its beauty, unique, high quality and great value which is\nsuitable for gifts, souvenirs.\n");
        dialogRsq.clear();
        pressEnterRsq();
        dialogRsq.push_back("\n    However, to own each piece of work is not easy because he will\nsell only to the one he wants to sell. It\'s not that the customer\nchooses him but he is the one who chooses the customers.\nYou see that the vase in the shop is very beautiful.\nWhen you ask the store owner to buy a vase, he asks you a question.\n");
        dialogRsq2.push_back("-----------------------------------------------------------------\n");
        dialogRsq2.push_back("Who is the one you love the most? (Only 1 word)");
        dialogRsq2.push_back("\n-----------------------------------------------------------------\n");
        dialogRsq2.push_back("Your Answer: ");
        dialogOut3;
        dialogOutSlowRsq;
        dialogOut2;
        dialogRsq3.push_back("\n    However, to own each piece of work is not easy because he will\nsell only to the one he wants to sell. It\'s not that the customer\nchooses him but he is the one who chooses the customers.\nYou see that the vase in the shop is very beautiful.\nWhen you ask the store owner to buy a vase, he asks you a question.\n");
        cin >> name;
        system("cls");
        dialogRsq.clear();
        dialogRsq2.erase(dialogRsq2.begin() + 2, dialogRsq2.begin() + 3);
        dialogRsq2.insert(dialogRsq2.begin() + 2,"What is the thing you love the most? (Only 1 word)");
        dialogOut3;
        dialogOutSlowRsq;
        dialogOut2;
        cin>>thing;
        dialogRsq2.erase(dialogRsq2.begin() + 1, dialogRsq2.end());
        system("cls");
        cout<<"*****************************************************************\n";
        for (char c : "    Then, the ceramicist asked you again, \"If ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
        for (char c : name) {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    } 
        for (char c : " caused your\n ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
        for (char c : thing) {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
        for (char c : " to be broken that it couldn't be repaired, it was no\n longer available for sale, and it couldn't be reworked. Will you forgive him/her?\".\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
        dialogRsq.clear();
        dialogRsq2.push_back("-----------------------------------------------------------------\n");
        dialogRsq2.push_back("Will you forgive him/her?");
        dialogRsq2.push_back("\n1) Yes, I will.");
        dialogRsq2.push_back("\n2) No, I will not.");
        dialogRsq2.push_back("\n-----------------------------------------------------------------\n");
        dialogRsq2.push_back("Your Choice: ");
        dialogOutSlowRsq;
        dialogOut2;
        cin>>answer;
        dialogRsq.clear();
        dialogRsq2.erase(dialogRsq2.begin() + 1, dialogRsq2.end());
        system("cls");
        if(answer==1){
            dialogRsq.push_back("\n    You choose to forgive your lover. You show the ceramicist\na kind of forgivable love. He is really impressed by you.\n");
            dialogOut3;
            dialogOutSlowRsq;
            dialogOut2;
            dialogRsq3.push_back("\n    You choose to forgive your lover. You show the ceramicist\na kind of forgivable love. He is really impressed by you.\n");
            pressEnterRsq();
            dialogRsq.clear();
            dialogRsq.push_back("\n    He gives you that vase and Rose Quartz, the \"Crystal of  Forgiveness and Love\".\n\n");
            rosequartz = true;
            dialogOut3;
            dialogOutSlowRsq;
            cout << " ----------------------------------------------------------\n|   Rose Quartz provides unconditional love and compassion |\n| for yourself and those closest to you. This healing stone|\n| helps you balance and find clarity and forgiveness in    |\n| your emotions.)                                          |\n ----------------------------------------------------------\n";
            dialogRsq.clear();
            dialogRsq.push_back("\n    Vase which is priceless. This vase is really beautiful \n\n    You left the store satisfied.\n");
            vase=1;
            dialogRsq.push_back("\n    *** LET\'S CONTINUE THE JOURNEY ! ***\n");
            dialogOutSlowRsq;
            dialogOut2;
            break;
            
        }else if(answer==2){
            dialogRsq.push_back
            ("\n    He is quite disappointed. He also don't sell you a \nvase, and you have to pay the entrance fee. So you leave\nthe store dejected.\n");
            money-=15;
            dialogOut3;
            dialogOutSlowRsq;
            for (char c : "\n    You lose 15 coins \n\n    Your coins: ") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
            cout << money;
            for (char c : " (-15)\n") {
                        cout << c;
                        this_thread::sleep_for(chrono::milliseconds(50));
                    }
            dialogOut2;
            cin.ignore();
            break;
        }
    
    }
    pressEnterRsq();
}