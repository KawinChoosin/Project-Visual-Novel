#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

void thefirstglass(int &);

void teashop(int &);
void largebreadshop(int &, int &);
void hospital(int &, int &);
void thiscityisfull(int &, int &);

#define dialogOutAmt                                            \
    for (auto i = dialogAmt.begin(); i != dialogAmt.end(); i++) \
        cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutAmt2                                             \
    for (auto i = dialogAmt2.begin(); i != dialogAmt2.end(); i++) \
        cout << *i; // #define ให้ cout dialog ออกมา
#define dialogOutAmt3                                             \
    for (auto i = dialogAmt3.begin(); i != dialogAmt3.end(); i++) \
        cout << *i; // #define ให้ cout dialog ออกมา

#define dialogOutSlowAmt                                        \
    for (auto i = dialogAmt.begin(); i != dialogAmt.end(); i++) \
    {                                                           \
        for (char c : *i)                                       \
        {                                                       \
            cout << c;                                          \
            this_thread::sleep_for(chrono::milliseconds(50));   \
        }                                                       \
    } // #define ให้ cout dialog ออกมา.

vector<string> dialogAmt;
vector<string> dialogAmt2;
vector<string> dialogAmt3;

void pressEnterAmt()
{
    cout << "Press Enter to continue...";
    cin.get();
    system("cls");
}

void Amt(int &hp, int &money, bool &amethyst)
{
    int answer;
    while (true){
        system("cls");
        dialogAmt2.push_back("*****************************************************************\n");
        dialogAmt.push_back("\n    At that time, you traveled to the cold areas, with strong\nwinds, temperatures dropped And seems like a snowstorm is closer\nIf you walked, you may be in danger\nfrom the storm.\n");
        dialogAmt3.push_back("\n*****************************************************************\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        pressEnterAmt();
        dialogAmt2.push_back("\n    At that time, you traveled to the cold areas, with strong\nwinds, temperatures dropped And seems like a snowstorm is closer\nIf you walked, you may be in danger\nfrom the storm.\n");
        dialogAmt.clear();
        dialogAmt.push_back("\n    But you are very lucky to meet a old cottage. That seems to\nbe no one. Will you come in?\n");
        dialogAmt3.push_back("-------------------------------------------------------------------\n");
        dialogAmt3.push_back("Will you come in?\n");
        dialogAmt3.push_back("1) Yes.\n");
        dialogAmt3.push_back("2) No.\n");
        dialogAmt3.push_back("-------------------------------------------------------------------\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        dialogAmt.clear();
        dialogAmt2.push_back("\n    But you are very lucky to meet a old cottage. That seems to\nbe no one. Will you come in?\n");
        dialogAmt3.erase(dialogAmt3.begin() + 1, dialogAmt3.end());
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
        system("cls"); 
        if (answer == 1){
            dialogAmt.push_back("\n    You decided to enter the hut. This hut looks very deserted.\nLike nobody has been around for many years But there is a fireplace\nAnd then you lit the fireplace. And resting \n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
            dialogAmt2.push_back("\n    You decided to enter the hut. This hut looks very deserted.\nLike nobody has been around for many years But there is a fireplace\nAnd then you lit the fireplace. And resting \n");
             
            pressEnterAmt();
            dialogAmt.push_back("\n    But in the middle of that night You feel certain energy. But\ncannot see clearly It's just a black shadow.\nHurry at you And you have fallen\n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
            dialogAmt2.push_back("\n    But in the middle of that night You feel certain energy. But\ncannot see clearly It's just a black shadow.\nHurry at you And you have fallen\n");
             
            pressEnterAmt();
            dialogAmt.push_back("\n    When waking up early The storm has calmed down. Even though\nyou sleep all night, you don't feel refreshed at all.\nAnd felt that there was no energy Your energy is continuously\ndown in a way that has never been before. \n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogAmt.clear();
            dialogAmt2.push_back("\n    When waking up early The storm has calmed down. Even though\nyou sleep all night, you don't feel refreshed at all.\nAnd felt that there was no energy Your energy is continuously\ndown in a way that has never been before. \n");
            hp -= 1;
            cout << "-------------------------------------------------------------------\n";
            cout << "You lose 1 hp.\nYour hp: " << hp << "  (-1)\n";
            cout << "-------------------------------------------------------------------\n";
            dialogOutAmt3;
             
            pressEnterAmt();
            dialogAmt2.clear();
            dialogAmt3.clear();
            dialogAmt.clear();

            dialogAmt2.push_back("*****************************************************************\n");
            dialogAmt.push_back(
                "\n   So you traveled through the snow that had fallen last night.\nAnd found in the city that is located in the midst of a large and\ntall mountains, which is covered with snow throughout the year,\nthere is peace and cold weather and people are friendly.\n");
            dialogAmt3.push_back("\n*****************************************************************\n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
             
            pressEnterAmt();
            dialogAmt2.push_back(
                "\n   So you traveled through the snow that had fallen last night.\nAnd found in the city that is located in the midst of a large and\ntall mountains, which is covered with snow throughout the year,\nthere is peace and cold weather and people are friendly.\n");
            dialogAmt.push_back("\n   This city is full of people who are walking. There are many shops.\nAlthough last night there will be snow falling But people still live\nlike nothing You who feel tired. Where are you going?\n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
             
            pressEnterAmt();
            dialogAmt2.push_back("\n   This city is full of people who are walking. There are many shops.\nAlthough last night there will be snow falling But people still live\nlike nothing You who feel tired. Where are you going?\n");
            dialogAmt3.push_back("===================================================================\n");
            dialogAmt3.push_back("Where are you going? \n");
            dialogAmt3.push_back("1) Tea shop at the corner of the road. \n");
            dialogAmt3.push_back("2) Large bread shop in the heart of the city.\n");
            dialogAmt3.push_back("3) Hospital. \n");
            dialogAmt3.push_back("===================================================================\n");
            dialogOutAmt2;
            dialogOutAmt3;
            dialogAmt3.erase(dialogAmt3.begin() + 1, dialogAmt3.end());
            dialogAmt2.erase(dialogAmt2.begin() + 1, dialogAmt2.end());
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
            system("cls");
            if (answer == 1)
            {
                teashop(hp);
            }
            else if (answer == 2)
            {
                largebreadshop(hp, money);
            }
            else if (answer == 3)
            {
                hospital(hp, money);
            }
            break;
        }
        if (answer == 2){
            dialogAmt2.push_back("*****************************************************************\n");
            dialogAmt.push_back("   You decided not to enter the hut. And keep going to another\nkingdom. \n");
            dialogAmt3.push_back("\n*****************************************************************\n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
             
            pressEnterAmt();
            dialogAmt2.push_back("\n   You decided not to enter the hut. And keep going to another\nkingdom. \n");
            dialogAmt.push_back("\n   You have met with a snow storm. Even to hide under a tree ,\nBut was unable to endure the cold, so he was unconscious.\n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
            dialogAmt2.push_back("\n   You have met with a snow storm. Even to hide under a tree ,\nBut was unable to endure the cold, so he was unconscious.\n");
            dialogOutAmt2;
            hp -= 2;
            cout << "-----------------------------------------\n";
            cout << "You lose 2 hp.\nYour hp: " << hp << "  (-2)\n";
            cout << "-----------------------------------------\n";
            dialogOutAmt3;
             
            pressEnterAmt();
            dialogAmt.push_back("\n   Fortunately, the villagers walked past, so he took you into\nShangri-La, located in the midst of a large mountain at the top of\nthe snow throughout the year,\npeaceful, cool and friendly people.\n");
            dialogOutAmt2;
            cout << "-----------------------------------------\n";
            cout << "You lose 2 hp.\nYour hp: " << hp << "  (-2)\n";
            cout << "-----------------------------------------\n";
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt.clear();
            dialogAmt2.clear();
            dialogAmt3.clear();
            thiscityisfull(hp, money);
            break;
        }
    }
     
    pressEnterAmt();
    dialogAmt2.push_back("\n*****************************************************************\n");
    dialogAmt.push_back("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    dialogAmt3.push_back("*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt2.clear();
    dialogAmt3.clear();
    dialogAmt.clear();
}

void hospital(int &hp, int &money){
    int answer;
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt.push_back("                              Hospital\n");
    dialogAmt3.push_back("===================================================================\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("                              Hospital\n");
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt2.push_back("*****************************************************************\n");

    dialogAmt.push_back("\n   In the hospital, there are only a few patients, 1 doctor\nand 3 nurses, you have been waiting in line to receive treatment.\n Next to the injured person from a bad bear.\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
    dialogAmt2.push_back("\n   In the hospital, there are only a few patients, 1 doctor\nand 3 nurses, you have been waiting in line to receive treatment.\n Next to the injured person from a bad bear.\n");
     
    pressEnterAmt();
    dialogAmt.push_back("\n   And the other was slippery from skiing until the ankle\nWhen they gradually go to treat Until your queue.\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("\n   And the other was slippery from skiing until the ankle\nWhen they gradually go to treat Until your queue.\n");
    dialogAmt.push_back("\n   The doctor told you that your body is normal, everything\nis nothing wrong. You should sleep a lot.\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    money -= 15;
    dialogAmt2.push_back("\n   The doctor told you that your body is normal, everything\nis nothing wrong. You should sleep a lot.\n");
    dialogOutAmt2;
    cout << "-----------------------------------------\n";
    cout << "You lose 15 coins \nYour coins: " << money << "  (-15)\n";
    cout << "-----------------------------------------\n";
    dialogOutAmt3;
     
    pressEnterAmt();
    dialogAmt.clear();
    dialogAmt2.clear();
    dialogAmt3.clear();
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt.push_back("  You have paid medical expenses. So you came out of the hospital\nwith confusion. Where are you going to choose to go?\n");
    dialogAmt3.push_back("===================================================================\n");
    
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("  You have paid medical expenses. So you came out of the hospital\nwith confusion. Where are you going to choose to go?\n");
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt2.push_back("Where are you going? \n");
    dialogAmt2.push_back("1) Tea shop at the corner of the road. \n");
    dialogAmt2.push_back("2) Large bread shop in the heart of the city.\n");
    dialogAmt2.push_back("3) It's better to leave the city. \n");
    dialogAmt2.push_back("===================================================================\n");
    dialogOutAmt2;
    dialogAmt2.clear();
    dialogAmt3.clear();

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
    if (answer == 1)
    {
        teashop(hp);
    }
    else if (answer == 2)
    {
        largebreadshop(hp, money);
    }
    else if (answer == 3)
    {
    }
}

void largebreadshop(int &hp, int &money){
    int answer;
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt.push_back("             Large bread shop in the heart of the city\n");
    dialogAmt3.push_back("===================================================================\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
    dialogAmt3.clear();
    pressEnterAmt();
    dialogAmt2.push_back("             Large bread shop in the heart of the city\n");
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt2.push_back("*****************************************************************\n");
    dialogAmt.push_back("\n   This bread shop is a famous shop in this city that anyone has\nto eat. There are many types of bread. From the whole wheat bread,\ncroissant and many others In the shop there is a table to\nsit as well. With the fragrance of a new baked bread overwhelming\nthroughout the shop.\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
    pressEnterAmt();
    dialogAmt2.push_back("\n   This bread shop is a famous shop in this city that anyone has\nto eat. There are many types of bread. From the whole wheat bread,\ncroissant and many others In the shop there is a table to\nsit as well. With the fragrance of a new baked bread overwhelming\nthroughout the shop.\n");
    dialogAmt2.push_back("\n*****************************************************************\n");
    dialogAmt2.push_back("-------------------------------------------------------------------\n");
    dialogAmt2.push_back("What do you choose to order?\n");
    dialogAmt2.push_back("1) Whole Wheat Bread.\n");
    dialogAmt2.push_back("2) Croissant.\n");
    dialogAmt2.push_back("3) Brioche.\n");
    dialogAmt2.push_back("4) Baguette.\n");
    dialogAmt2.push_back("5) Bagel.\n");
    dialogAmt2.push_back("6) Pretzel.\n");
    dialogAmt2.push_back("7) Ciabatta bread.\n");
    dialogAmt2.push_back("8) I DON\'T WANT TO ORDER.\n");
    dialogAmt2.push_back("-------------------------------------------------------------------\n");
    dialogOutAmt2;
    do
    {
        cout << "Your Choice: ";
        cin >> answer;
        if (answer != 1 && answer != 2 && answer != 3 && answer != 4 && answer != 5 && answer != 6 && answer != 7 && answer != 8)
        {
            cout << "Wrong answer, Try again.\n";
            continue;
        }
        break;
    } while (true);
    system("cls");

    if (answer == 1 || answer == 2 || answer == 3 || answer == 4 || answer == 5 || answer == 6 || answer == 7)
    {
        money -= 5;
        dialogOutAmt2;
        cout << "-----------------------------------------\n";
        cout << "\nYou lose 5 coins \nYour coins: " << money << "  (-5)\n";
        cout << "-----------------------------------------\n";
         
        pressEnterAmt();
        dialogAmt2.clear();
        dialogAmt2.push_back("===================================================================\n");
        dialogAmt.push_back("\n  When you swallow bread, a shadow in your body comes out of your\nmouth and makes you suffocate. You see the shadow rushing\ninto the bread oven.\n");
        dialogAmt3.push_back("===================================================================\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        dialogAmt.clear();
        hp -= 1;
         
        pressEnterAmt();
        dialogAmt2.push_back("\n  When you swallow bread, a shadow in your body comes out of your\nmouth and makes you suffocate. You see the shadow rushing\ninto the bread oven.\n");
        dialogOutAmt2;
        cout << "-------------------------------------------------------------------\n";
        cout << "\'When the dark soul is out you lose 1 hp.\n";
        cout << "-------------------------------------------------------------------\n";
        cout << "-------------------------------------------------------------------\n";
        cout << "You lose 1 hp.\nYour hp: " << hp << "  (-1)\n";
        cout << "-------------------------------------------------------------------\n";
        dialogOutAmt3;
         
        pressEnterAmt();
        dialogAmt2.clear();
        dialogAmt3.clear();
        dialogAmt2.push_back("*****************************************************************\n");
        dialogAmt.push_back(
            "\n   The old woman sitting near the table sees it. She told you\nthat luckily, you are still alive and see the shadow.\nThe soul of darkness follows people to absorb the energy\nof life so that they can survive.\n");
        dialogAmt3.push_back("\n*****************************************************************\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        dialogAmt.clear();
         
        pressEnterAmt();
        dialogAmt2.push_back(
            "\n   The old woman sitting near the table sees it. She told you\nthat luckily, you are still alive and see the shadow.\nThe soul of darkness follows people to absorb the energy\nof life so that they can survive.\n");
        dialogAmt.push_back(
            "\n   However, because of the speciality of this store, the dark souls\nthat work in the store will get energy from the stove,\nnot human energy\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        dialogAmt.clear();
        dialogAmt2.clear();
        dialogAmt3.clear();
         
        pressEnterAmt();
    }
    else if (answer == 8)
    {
    }
    dialogOutAmt2;
    cout << "\n*****************************************************************\n";
    dialogAmt.push_back(
        "\n    You walk out the store and feel a little bit exhausted.\nAnd continue your journey.\n");
    dialogOutSlowAmt;
    dialogAmt.clear();
    cout << "\n*****************************************************************\n";
    dialogOutAmt3;
}

void thiscityisfull(int &hp, int &money){
    int answer;
    pressEnterAmt();
    dialogAmt2.push_back("*****************************************************************\n");
    dialogAmt.push_back("\n   This city is full of people who are walking. There are many shops.\nAlthough last night there will be snow falling But people still live\nlike nothing You who feel tired. Where are you going?\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("\n   This city is full of people who are walking. There are many shops.\nAlthough last night there will be snow falling But people still live\nlike nothing You who feel tired. Where are you going?\n");
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt2.push_back("Where are you going? \n");
    dialogAmt2.push_back("1) Tea shop at the corner of the road. \n");
    dialogAmt2.push_back("2) Large bread shop in the heart of the city.\n");
    dialogAmt2.push_back("3) Hospital. \n");
    dialogAmt2.push_back("===================================================================\n");
    dialogOutAmt2;
    dialogOutAmt3;
    dialogAmt2.clear();
    dialogAmt3.clear();
    dialogAmt.clear();
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
    system("cls");
    if (answer == 1)
    {
        teashop(hp);
    }
    else if (answer == 2)
    {
        largebreadshop(hp, money);
    }
    else if (answer == 3)
    {
        hospital(hp, money);
    }
}

void teashop(int &hp){
    int answer;
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt.push_back("                Tea shop at the corner of the road\n");
    dialogAmt3.push_back("===================================================================\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("                Tea shop at the corner of the road\n");
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt2.push_back("*****************************************************************\n");
    dialogAmt.push_back("\n   This tea shop is very quiet. Like an abandoned shop Looks\n mysterious Full of strange aura While you are walking around\nthe shop There was an old man walking out.\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("\n   This tea shop is very quiet. Like an abandoned shop Looks\n mysterious Full of strange aura While you are walking around\nthe shop There was an old man walking out.\n");
    dialogAmt.push_back(
    "\n    He has a rather flooded shape, wearing old clothes, beard\nand white hair. Walked in slowly, explored\naround you And said that \"you are going to die from\nthe aura around you\"\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back(
    "\n    He has a rather flooded shape, wearing old clothes, beard\nand white hair. Walked in slowly, explored\naround you And said that \"you are going to die from\nthe aura around you\"\n");
    dialogAmt.push_back(
    "\n    The elders returned to the back of the shop. And come back\nwith 3 glasses of tea.\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back(
    "\n    The elders returned to the back of the shop. And come back\nwith 3 glasses of tea.\n");
    dialogAmt.push_back(
    "\n    The smell is quite terrible. The color looks scary. But from\nwhat he said You will decide whether to drink or not.\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back(
    "\n    The smell is quite terrible. The color looks scary. But from\nwhat he said You will decide whether to drink or not.\n");
    dialogAmt2.push_back("\n*****************************************************************\n");
    dialogAmt2.push_back("-------------------------------------------------------------------\n");
    dialogAmt2.push_back("1) Drink.\n");
    dialogAmt2.push_back("2) No, thanks.\n");
    dialogAmt2.push_back("-------------------------------------------------------------------\n");
    dialogOutAmt2;
    dialogAmt2.clear();
    dialogAmt3.clear();
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
    system("cls");
    if (answer == 1)
    {
        thefirstglass(hp);
    }
    else if (answer == 2)
    {
        dialogAmt2.push_back("===================================================================\n");
        dialogAmt.push_back("\n  You decided to not drink tea. Your symptoms subsided again.\n");
        dialogAmt3.push_back("===================================================================\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        dialogAmt.clear();
         
        pressEnterAmt();
        dialogAmt2.push_back("\n  You decided to not drink tea. Your symptoms subsided again.\n");
        hp -= 2;
        dialogOutAmt2;
        cout << "-----------------------------------------\n";
        cout << "\nYou lose 2 hp.\nYour hp: " << hp << "  (-2)\n";
        cout << "-----------------------------------------\n";
        dialogOutAmt3;
         
        pressEnterAmt();
        dialogAmt2.clear();
        dialogAmt3.clear();
        dialogAmt2.push_back("\n*****************************************************************\n");
        dialogAmt.push_back(
        "\nThe old man gives you a second chance will you take the drink?\n"); 
        dialogAmt3.push_back("-------------------------------------------------------------------\n");
        dialogAmt3.push_back("1) Drink.\n");
        dialogAmt3.push_back("2) No, thanks.\n");
        dialogAmt3.push_back("-------------------------------------------------------------------\n");
        dialogAmt3.push_back("\n*****************************************************************\n");
        dialogOutAmt2;
        dialogOutSlowAmt;
        dialogOutAmt3;
        dialogAmt.clear();
        dialogAmt3.clear();
        dialogAmt2.clear();
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
        system("cls");
        if (answer == 1)
        {
            thefirstglass(hp);
        }
        else if (answer == 2)
        {
             dialogAmt2.push_back("===================================================================\n");
            dialogAmt.push_back("\n  You still decided to not drink the tea. You walked out of this\ntea shop.\n");
            dialogAmt3.push_back("===================================================================\n");
            dialogOutAmt2;
            dialogOutSlowAmt;
            dialogOutAmt3;
            dialogAmt2.clear();
            dialogAmt3.clear();
            dialogAmt.clear();
            
        }
    }
}

void thefirstglass(int &hp){
    dialogAmt2.push_back("*****************************************************************\n");
    dialogAmt.push_back("\n  The first glass you drink ,you got a vomit in black. And\nthere is a black vapor coming out as well. This is a tea that\n pulls out the dark spirit. The elders who are waiting for the\nglass for keep it in a jar. He said that he would take it to\n the place where it should be.\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("\n  The first glass you drink ,you got a vomit in black. And\nthere is a black vapor coming out as well. This is a tea that\n pulls out the dark spirit. The elders who are waiting for the\nglass for keep it in a jar. He said that he would take it to\n the place where it should be.\n");
    dialogAmt.push_back(
    "\n   The next glass is the treatment of wounds within your body.\nAnd the last glass is to increase your power.\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back(
    "\n   The next glass is the treatment of wounds within your body.\nAnd the last glass is to increase your power.\n");
    hp += 1;
    dialogOutAmt2;
    cout << "-------------------------------------------------------------------\n";
    cout << "\nYou got 1 hp.\nYour hp: " << hp << "  (+1)\n";
    cout << "-------------------------------------------------------------------\n";
    dialogOutAmt3;
     
    pressEnterAmt(); 
  
    dialogAmt2.push_back("*****************************************************************\n");
    dialogAmt.push_back("\n   The old people have seen that in the future you will be very\n difficult. Therefore gives you an Amethyst,\nthe \"Crystal of Purity\".\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
    dialogAmt3.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("\n   The old people have seen that in the future you will be very\n difficult. Therefore gives you an Amethyst,\nthe \"Crystal of Purity\".\n");
    dialogAmt2.push_back("===================================================================\n");
    dialogAmt.push_back("\nAmethyst is a powerful negative-energy cleansing properties. It\nalso provides comfort and protection during times of healing.\n");
    dialogAmt3.push_back("===================================================================\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt.clear();
     
    pressEnterAmt();
    dialogAmt2.push_back("\nAmethyst is a powerful negative-energy cleansing properties. It\nalso provides comfort and protection during times of healing.\n");
    dialogAmt2.push_back("*****************************************************************\n");
    dialogAmt.push_back("\nYou thank the old man and come out.\n");
    dialogAmt3.push_back("\n*****************************************************************\n");
    dialogOutAmt2;
    dialogOutSlowAmt;
    dialogOutAmt3;
    dialogAmt2.clear();
    dialogAmt3.clear();
    dialogAmt.clear();
 
}
