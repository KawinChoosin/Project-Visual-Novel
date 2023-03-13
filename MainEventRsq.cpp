#include<iostream>
#include<string>
#include<vector>
using namespace std;

string name,thing;

#define dialogOut for(auto i = dialogRsq.begin(); i != dialogRsq.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

vector<string> dialogRsq;

void pressEnterRsq(){
    cout<<"Press Enter to continue...";
    cin.get();
    system("cls");
}

void Rsq(int &hp, int &money, bool &rosequartz, bool &vase){
    int answer, con;
    while(true){
        system("cls");
        dialogRsq.push_back("*****************************************************************\n");
        dialogRsq.push_back
        ("  You have traveled until you arrive at the city of Avalon. It is \nsurrounded by trees, meadows, houses, lush green fields and wide fields\nas far as the eye can see.When you enter the city center, you will find\nMark Clay\'s ceramic shop. He is a very famous ceramicist. His work is\nknown for its beauty, unique, high quality and great value which is\nsuitable for gifts, souvenirs.\n");
        dialogRsq.push_back("\n*****************************************************************\n");
        dialogOut;
        pressEnterRsq();
        dialogRsq.insert(dialogRsq.begin()+2,"\n    However, to own each piece of work is not easy because he wil\nsell only to the one he wants to sell. It\'s not that the customer\nchooses him but he is the one who chooses the customers.\nYou see that the vase in the shop is very beautiful.\nWhen you ask the store owner to buy a vase, he asks you a question.\n");
        dialogRsq.push_back("-----------------------------------------------------------------\n");
        dialogRsq.push_back("Who is the one you love the most?");
        dialogRsq.push_back("\n-----------------------------------------------------------------\n");
        dialogRsq.push_back("Your Answer: ");
        dialogOut;
        cin>>name;
        system("cls");
        dialogRsq.erase(dialogRsq.begin()+5);
        dialogRsq.insert(dialogRsq.begin()+5,"What is the thing you love the most?");
        dialogOut;
        cin>>thing;
        system("cls");
        cout<<
        "*****************************************************************\n";
        cout<<
        "    Then, the ceramicist asked you again, \"If "<<name<<" caused your\n "<<thing<<" to be broken that it couldn't be repaired, it was no\n longer available for sale, and it couldn't be reworked.\nWill you forgive him/her?\".\n";
        cout<<
        "\n*****************************************************************\n";
        dialogRsq.clear();
        dialogRsq.push_back
        ("-----------------------------------------------------------------\n");
        dialogRsq.push_back("Will you forgive him/her?");
        dialogRsq.push_back("\n1) Yes, I will.");
        dialogRsq.push_back("\n2) No, I will not.");
        dialogRsq.push_back("\n-----------------------------------------------------------------\n");
        dialogOut;
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer != 1 && answer != 2){
                cout<<"Wrong answer, Try again.\n";
                continue;
            }break;
        }while(true);
        dialogRsq.clear();
        system("cls");
        if(answer==1){
            dialogRsq.push_back
            ("*****************************************************************\n");
            dialogRsq.push_back
            ("  You chose to forgive your lover. You showed the ceramicist\na kind of forgivable love. He was really impressed by you.\n");
            dialogRsq.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            cin.ignore();
            pressEnterRsq();
            dialogRsq.insert(dialogRsq.begin()+2,
            "\n   He gives you that vase and Rose Quartz, the \"Crystal of\n Forgiveness and Love\".\n");
            dialogOut;
            rosequartz = true;

            pressEnterRsq();
            dialogRsq.insert(dialogRsq.begin()+3,
            " ----------------------------------------------------------\n|   Rose Quartz provides unconditional love and compassion |\n| for yourself and those closest to you. This healing stone|\n| helps you balance and find clarity and forgiveness in    |\n| your emotions.)                                          |\n ----------------------------------------------------------\n");
            dialogOut;
            pressEnterRsq();
            dialogRsq.insert(dialogRsq.begin()+4,"\n    Vase which is priceless\n   This vase is really beautiful \n    You left the store satisfied.\n");
            vase=1;//vase++
            dialogOut;
            dialogRsq.clear();
            pressEnterRsq();
            dialogOut;
            
            break;
            
        }else if(answer==2){
            dialogRsq.push_back
            ("*****************************************************************\n");
            dialogRsq.push_back
            ("     He was quite disappointed. He also did not sell you a \nvase, and you have to pay the entrance fee. So you left\nthe store dejected.\n");
            dialogRsq.push_back
            ("\n*****************************************************************\n"); 
            dialogOut;
            money-=15;
            cin.ignore();
            pressEnterRsq();
            cout<<"-----------------------------------------";
            cout<<"\nYou lose 15 coins \nYour coins: "<<money<<"  (-15)\n";
            cout<<"-----------------------------------------\n";
            
            break;
        }
            
    }

    pressEnterRsq();
    cout<<("\n*****************************************************************\n");
    cout<<("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");
    pressEnterRsq();
}
 