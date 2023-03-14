#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

#define dialogOut for(auto i = dialogAmt.begin(); i != dialogAmt.end(); i++) cout << *i; // #define ให้ cout dialog ออกมา

vector<string> dialogAmt;

void thefirstglass();

void teashop();
void largebreadshop();
void hospital();
void thiscityisfull();

void pressEnterAmt(){
    cout<<"Press Enter to continue...";
    cin.get();
    system("cls");
}

void Amt(int &hp, int &money, bool &amethyst){
    int answer;
    while(true){
        system("cls");
        dialogAmt.push_back
        ("*****************************************************************\n");
        dialogAmt.push_back
        ("    At that time, you traveled to the cold areas, with strong\nwinds, temperatures dropped And seems like a snowstorm is closer\nIf you walked, you may be in danger\nfrom the storm.\n");
        dialogAmt.push_back
        ("\n*****************************************************************\n");
        dialogOut;
        pressEnterAmt();
        dialogAmt.insert(dialogAmt.begin()+2,
        "\n    But you are very lucky to meet a old cottage. That seems to\nbe no one. Will you come in?\n");
        dialogOut;
        pressEnterAmt();
        dialogAmt.push_back
        ("-------------------------------------------------------------------\n");
        dialogAmt.push_back
        ("Will you come in?\n");
        dialogAmt.push_back
        ("1) Yes.\n");
        dialogAmt.push_back
        ("2) No.\n");
        dialogAmt.push_back
        ("-------------------------------------------------------------------\n");
        dialogOut;
        do{
            cout<<"Your Choice: ";
            cin>>answer;
            if(answer!=1&&answer!=2){
                cout<<"Wrong answer, Try again.\n";
                continue;
            }break;
        }while(true);
        system("cls");
        dialogAmt.clear();
        if(answer==1){
            dialogAmt.push_back
            ("*****************************************************************\n");
            dialogAmt.push_back
            ("    You decided to enter the hut. This hut looks very deserted.\nLike nobody has been around for many years But there is a fireplace\nAnd then you lit the fireplace. And resting \n");
            dialogAmt.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            cin.ignore();
            pressEnterAmt();
            dialogAmt.insert(dialogAmt.begin()+2,
            "\n    But in the middle of that night You feel certain energy. But\ncannot see clearly It's just a black shadow.\nHurry at you And you have fallen\n");
            dialogOut;
            pressEnterAmt();
            dialogAmt.clear();
            cout<<"*****************************************************************\n";
            cout<<"    When waking up early The storm has calmed down. Even though\nyou sleep all night, you don't feel refreshed at all.\nAnd felt that there was no energy Your energy is continuously\ndown in a way that has never been before. \n";
            cout<<"\n*****************************************************************\n";

            pressEnterAmt();
            cout<<"*****************************************************************\n";
            cout<<"    When waking up early The storm has calmed down. Even though\nyou sleep all night, you don't feel refreshed at all.\nAnd felt that there was no energy Your energy is continuously\ndown in a way that has never been before. \n";
            cout<<"\n*****************************************************************\n";
            hp-=1;
            cout<<"-------------------------------------------------------------------\n";
            cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
            cout<<"-------------------------------------------------------------------\n";
            pressEnterAmt();
            dialogAmt.push_back
            ("*****************************************************************\n");
            dialogAmt.push_back(
            "   So you traveled through the snow that had fallen last night.\nAnd found in the city that is located in the midst of a large and\ntall mountains, which is covered with snow throughout the year,\nthere is peace and cold weather and people are friendly.\n");
            dialogAmt.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            pressEnterAmt();
            dialogAmt.insert(dialogAmt.begin()+2,
            "\n   This city is full of people who are walking. There are many shops.\nAlthough last night there will be snow falling But people still live\nlike nothing You who feel tired. Where are you going?\n");
            dialogOut;
            pressEnterAmt();
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("Where are you going? \n");
            dialogAmt.push_back
            ("1) Tea shop at the corner of the road. \n");
            dialogAmt.push_back
            ("2) Large bread shop in the heart of the city.\n");
            dialogAmt.push_back
            ("3) Hospital. \n");
            dialogAmt.push_back
            ("===================================================================\n");
            dialogOut;
            do{
                cout<<"Your Choice: ";
                cin>>answer;
                if(answer!=1&&answer!=2&&answer!=3){
                    cout<<"Wrong answer, Try again.\n";
                    continue;
                }break;
            }while(true);
            system("cls");
            dialogAmt.clear();
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("*****************************************************************\n");
            dialogAmt.push_back
            ("\n*****************************************************************\n");
            if(answer==1){
                teashop();
            }else if(answer==2){
                largebreadshop();
            }else if(answer==3){
                hospital();
            }


        }if(answer==2){
            dialogAmt.push_back
            ("*****************************************************************\n");
            dialogAmt.push_back
            ("   You decided not to enter the hut. And keep going to another\nkingdom. \n");
            dialogAmt.push_back
            ("\n*****************************************************************\n");
            dialogOut;
            cin.ignore();
            pressEnterAmt();
            dialogAmt.insert(dialogAmt.begin()+2,
            "\n   You have met with a snow storm. Even to hide under a tree ,\nBut was unable to endure the cold, so he was unconscious.\n");
            dialogOut;
            hp-=2;
            cout<<"-----------------------------------------\n";
            cout<<"You lose 2 hp.\nYour hp: "<<hp<<"  (-2)\n";
            cout<<"-----------------------------------------\n"; 
            pressEnterAmt();
            dialogAmt.insert(dialogAmt.begin()+3,
            "\n   Fortunately, the villagers walked past, so he took you into\nShangri-La, located in the midst of a large mountain at the top of\nthe snow throughout the year,\npeaceful, cool and friendly people.\n");
            dialogOut;
            dialogAmt.clear();
            thiscityisfull();

        }
        break;
    }
    pressEnterAmt();
    dialogAmt.clear();
    dialogAmt.push_back
    ("\n*****************************************************************\n");
    dialogAmt.push_back("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    dialogAmt.push_back("*****************************************************************\n");
    dialogOut;

}


void hospital(){
    int hp,answer,money;
    dialogAmt.insert(dialogAmt.begin()+1,
    "                              Hospital\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+4,
    "   In the hospital, there are only a few patients, 1 doctor\nand 3 nurses, you have been waiting in line to receive treatment.\n Next to the injured person from a bad bear.\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+5,
    "\n   And the other was slippery from skiing until the ankle\nWhen they gradually go to treat Until your queue.\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+6,
    "\n   The doctor told you that your body is normal, everything\nis nothing wrong. You should sleep a lot.\n");
    dialogOut;
    pressEnterAmt();
    money-=15;
    cout<<"-----------------------------------------\n";
    cout<<"You lose 15 coins \nYour coins: "<<money<<"  (-15)\n";
    cout<<"-----------------------------------------\n";
    dialogAmt.clear();
    pressEnterAmt();
    dialogAmt.push_back
    ("===================================================================\n");
    dialogAmt.push_back
    ("  You have paid medical expenses. So you came out of the hospital\nwith confusion. Where are you going to choose to go?\n");
    dialogAmt.push_back
    ("===================================================================\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.push_back
    ("Where are you going? \n");
    dialogAmt.push_back
    ("1) Tea shop at the corner of the road. \n");
    dialogAmt.push_back
    ("2) Large bread shop in the heart of the city.\n");
    dialogAmt.push_back
    ("3) It's better to leave the city. \n");
    dialogAmt.push_back
    ("===================================================================\n");
    dialogOut;
    do{
        cout<<"Your Choice: ";
        cin>>answer;
        if(answer!=1&&answer!=2&&answer!=3){
            cout<<"Wrong answer, Try again.\n";
            continue;
        }break;
    }while(true);
    dialogAmt.clear();
     dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("*****************************************************************\n");
            dialogAmt.push_back
            ("\n*****************************************************************\n");
    if(answer==1){

        teashop();
    }else if(answer==2){

        largebreadshop();
    }else if(answer==3){

    }

}


void largebreadshop(){
    int hp,answer,money;
    dialogAmt.insert(dialogAmt.begin()+1,
    "             Large bread shop in the heart of the city\n");
    dialogOut;
    cin.ignore();
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+4,
    "   This bread shop is a famous shop in this city that anyone has\nto eat. There are many types of bread. From the whole wheat bread,\ncroissant and many others In the shop there is a table to\nsit as well. With the fragrance of a new baked bread overwhelming\nthroughout the shop.\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.push_back
    ("-------------------------------------------------------------------\n");
    dialogAmt.push_back
    ("What do you choose to order?\n");
    dialogAmt.push_back
    ("1) Whole Wheat Bread.\n");
    dialogAmt.push_back
    ("2) Croissant.\n");
    dialogAmt.push_back
    ("3) Brioche.\n");
    dialogAmt.push_back
    ("4) Baguette.\n");
    dialogAmt.push_back
    ("5) Bagel.\n");
    dialogAmt.push_back
    ("6) Pretzel.\n");
    dialogAmt.push_back
    ("7) Ciabatta bread.\n");
    dialogAmt.push_back
    ("8) I DON\'T WANT TO ORDER.\n");
    dialogAmt.push_back
    ("-------------------------------------------------------------------\n");
    dialogOut;
    do{
        cout<<"Your Choice: ";
        cin>>answer;
        if(answer!=1&&answer!=2&&answer!=3&&answer!=4&&answer!=5&&answer!=6&&answer!=7&&answer!=8){
            cout<<"Wrong answer, Try again.\n";
            continue;
        }break;
    }while(true);
    system("cls");
   
    if(answer==1 || answer==2 || answer==3 || answer==4 || answer==5 || answer==6 || answer==7){
        dialogAmt.clear();
        money-=5;

        cout<<"-----------------------------------------\n";
        cout<<"\nYou lose 5 coins \nYour coins: "<<money<<"  (-5)\n";
        cout<<"-----------------------------------------\n";
        cin.ignore();
        pressEnterAmt();
        dialogAmt.push_back
        ("===================================================================\n");
        dialogAmt.push_back
        ("  When you swallow bread, a shadow in your body comes out of your\nmouth and makes you suffocate. You see the shadow rushing\ninto the bread oven.\n");
        dialogAmt.push_back
        ("===================================================================\n");
        dialogOut;
        hp-=1;
        pressEnterAmt();
        cout<<"-------------------------------------------------------------------\n";
        cout<<"\'When the dark soul is out you lose 1 hp.\n";
        cout<<"-------------------------------------------------------------------\n";   
        cout<<"-------------------------------------------------------------------\n";
        cout<<"You lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
        cout<<"-------------------------------------------------------------------\n";
        dialogAmt.clear();
     
        pressEnterAmt();
        dialogAmt.push_back
        ("*****************************************************************\n");
        dialogAmt.push_back(
        "   The old woman sitting near the table sees it. She told you\nthat luckily, you are still alive and see the shadow.\nThe soul of darkness follows people to absorb the energy\nof life so that they can survive.\n");
        dialogAmt.push_back
        ("\n*****************************************************************\n");
        dialogOut;
        pressEnterAmt();
        dialogAmt.insert(dialogAmt.begin()+2,
        "\n   However, because of the speciality of this store, the dark souls\nthat work in the store will get energy from the stove,\nnot human energy\n");
        dialogOut;
        pressEnterAmt();
        

    }else if(answer==8){
        
    }

        cout<<
        "\n*****************************************************************\n";
        cout<<
        "\n    You walk out the store and feel a little bit exhausted.\nAnd continue your journey.\n";
        cout<<
        "\n*****************************************************************\n";
 
}
            
       

void thiscityisfull(){
    int answer;
    pressEnterAmt();
    dialogAmt.push_back
        ("*****************************************************************\n");
    dialogAmt.push_back(
            "\n   This city is full of people who are walking. There are many shops.\nAlthough last night there will be snow falling But people still live\nlike nothing You who feel tired. Where are you going?\n");
            dialogAmt.push_back
        ("\n*****************************************************************\n");
            dialogOut;
            pressEnterAmt();
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("Where are you going? \n");
            dialogAmt.push_back
            ("1) Tea shop at the corner of the road. \n");
            dialogAmt.push_back
            ("2) Large bread shop in the heart of the city.\n");
            dialogAmt.push_back
            ("3) Hospital. \n");
            dialogAmt.push_back
            ("===================================================================\n");
            dialogOut;
            do{
                cout<<"Your Choice: ";
                cin>>answer;
                if(answer!=1&&answer!=2&&answer!=3){
                    cout<<"Wrong answer, Try again.\n";
                    continue;
                }break;
            }while(true);
            system("cls");
            dialogAmt.clear();
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("===================================================================\n");
            dialogAmt.push_back
            ("*****************************************************************\n");
            dialogAmt.push_back
            ("\n*****************************************************************\n");
            if(answer==1){
                teashop();
            }else if(answer==2){
                largebreadshop();
            }else if(answer==3){
                hospital();
            }


}














void teashop(){
    int hp,answer;
    dialogAmt.insert(dialogAmt.begin()+1,
    "                Tea shop at the corner of the road\n");
    dialogOut;
    cin.ignore();
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+4,
    "   This tea shop is very quiet. Like an abandoned shop Looks\n mysterious Full of strange aura While you are walking around\nthe shop There was an old man walking out.\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+5,
    "\n    He has a rather flooded shape, wearing old clothes, beard\nand white hair. Walked in slowly, explored\naround you And said that \"you are going to die from\nthe aura around you\"\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+6,
    "\n    The elders returned to the back of the shop. And come back\nwith 3 glasses of tea.\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+7,
    "\n    The smell is quite terrible. The color looks scary. But from\nwhat he said You will decide whether to drink or not.\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.push_back
    ("-------------------------------------------------------------------\n");
    dialogAmt.push_back
    ("1) Drink.\n");
    dialogAmt.push_back
    ("2) No, thanks.\n");
    dialogAmt.push_back
    ("-------------------------------------------------------------------\n");
    dialogOut;
    do{
        cout<<"Your Choice: ";
        cin>>answer;
        if(answer!=1&&answer!=2){
            cout<<"Wrong answer, Try again.\n";
            continue;
        }break;
    }while(true);
    system("cls");
    dialogAmt.clear();
                if(answer==1){
                    thefirstglass();
                }else if(answer==2){
                    dialogAmt.push_back
                    ("===================================================================\n");
                    dialogAmt.push_back
                    ("  You decided to not drink tea. Your symptoms subsided again.\n");
                    dialogAmt.push_back
                    ("===================================================================\n");
                    dialogOut;
                    cin.ignore();
                    pressEnterAmt();
                    hp-=2;
                    cout<<"-----------------------------------------\n";
                    cout<<"\nYou lose 2 hp.\nYour hp: "<<hp<<"  (-2)\n";cout<<"-----------------------------------------\n";
                    pressEnterAmt();
                    dialogAmt.erase(dialogAmt.begin()+1);
                    dialogAmt.insert(dialogAmt.begin()+1,
                    "The old man gives you a second chance will you take the drink?\n");
                    dialogAmt.push_back
                    ("-------------------------------------------------------------------\n");
                    dialogAmt.push_back
                    ("1) Drink.\n");
                    dialogAmt.push_back
                    ("2) No, thanks.\n");
                    dialogAmt.push_back
                    ("-------------------------------------------------------------------\n");
                    dialogOut;
                    do{
                        cout<<"Your Choice: ";
                        cin>>answer;
                        if(answer!=1&&answer!=2){
                            cout<<"Wrong answer, Try again.\n";
                            continue;
                        }break;
                    }while(true);
                    system("cls");
                    dialogAmt.clear();
                    if(answer==1){
                        thefirstglass();
                    }else if(answer==2){
                        dialogAmt.push_back
                        ("===================================================================\n");
                        dialogAmt.push_back
                        ("  You still decided to not drink the tea. You walked out of this\ntea shop.\n");
                        dialogAmt.push_back
                        ("===================================================================\n");
                        dialogOut;
                    }
                }
}


void thefirstglass(){
    int hp;
    dialogAmt.push_back
    ("*****************************************************************\n");
    dialogAmt.push_back
    ("  The first glass you drink ,you got a vomit in black. And\nthere is a black vapor coming out as well. This is a tea that\n pulls out the dark spirit. The elders who are waiting for the\nglass for keep it in a jar. He said that he would take it to\n the place where it should be.\n");
    dialogAmt.push_back
    ("\n*****************************************************************\n");
    dialogOut;
    cin.ignore();
    pressEnterAmt();
    dialogAmt.insert(dialogAmt.begin()+2,
    "\n   The next glass is the treatment of wounds within your body.\nAnd the last glass is to increase your power.\n");
    dialogOut;
    pressEnterAmt();
    hp+=1;
    cout<<"-------------------------------------------------------------------\n";
    cout<<"\nYou lose 1 hp.\nYour hp: "<<hp<<"  (-1)\n";
    cout<<"-------------------------------------------------------------------\n";
    pressEnterAmt();
    dialogAmt.clear();
    dialogAmt.push_back
    ("*****************************************************************\n");
    dialogAmt.push_back(
    "   The old people have seen that in the future you will be very\n difficult. Therefore gives you an Amethyst,\nthe \"Crystal of Purity\".\n");
    dialogAmt.push_back
    ("\n*****************************************************************\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.push_back
    ("===================================================================\n");
    dialogAmt.push_back
    ("\nAmethyst is a powerful negative-energy cleansing properties. It\nalso provides comfort and protection during times of healing.\n");
    dialogAmt.push_back
    ("\n===================================================================\n");
    dialogOut;
    pressEnterAmt();
    dialogAmt.push_back
    ("*****************************************************************\n");
    dialogAmt.push_back
    ("You thank the old man and come out.\n");
    dialogAmt.push_back
    ("\n*****************************************************************\n");
    dialogOut;
}

int main(){
    int hp,money;
    bool amethyst;
    Amt(hp,money,amethyst);

}