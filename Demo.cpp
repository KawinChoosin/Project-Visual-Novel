#include<iostream>
#include<ctime>
#include<string>
using namespace std;

void pressenter(){
    cin.ignore();
    cout << "Press Enter to continue";
    cin.get();
    system("cls");
}

int main(){
    system("cls");
    int answer;
    srand(time(0));
    cout << "-------------------------------------------------\n";
    cout << "While you are traveling on the way, \nyou coincidently found a snake fighting a rat.\n";
    cout << "-------------------------------------------------\n";
    cout << "What would you do?\n\n";
    cout << "1) Fight the snake.\n\n2) Fight the rat.\n\n3) Runaway\n(Success rate 50%)\n";
    cout << "-------------------------------------------------\n";
    bool haveKey;
    do{
        cout << "Your answer: ";
        cin >> answer;
        cout << "-------------------------------------------------\n";
        if(answer == 1){
            system("cls");
            cout << "-------------------------------------------------\n";
            cout << "You fought the snake.\n";
            cout << "The rat feels thank to you, he gives you a key.\n";
            cout << "-------------------------------------------------\n";
            haveKey = true;
            break;
        }
        if(answer == 2){
            system("cls");
            cout << "-------------------------------------------------\n";
            cout << "You fought the rat.\n";
            cout << "You won the fight but then the snake attacks you.\n";
            cout << "Your lifepoint -1\n";
            cout << "-------------------------------------------------\n";
            break;
        }
        if(answer == 3){
            int x = rand()%100 + 1;
            if(x > 50){
                system("cls");
                cout << "-------------------------------------------------\n";
                cout << "You ranaway.\n";
                cout << "-------------------------------------------------\n";
                break;
            }else{
                system("cls");
                cout << "-------------------------------------------------\n";
                cout << "They noticed you and changed target to you.\n";
                cout << "Your lifepoint -1\n";
                cout << "-------------------------------------------------\n";
                break;
            }
        }
    }while(true);
    pressenter();
    answer = 0;
    cout << "-------------------------------------------------\n";
    cout << "You've walk in to the woods and found a chest.\nThere is a keyhole on it.\nMaybe it would have something inside.\n";
    cout << "-------------------------------------------------\n";
    cout << "What would you do?\n\n";
    if(haveKey == false){
        cout << "1) Try to break it.\n(Success rate 50%)\n\n2) Leave it.\n\n";
    }else{
        cout << "1) Try to break it.\n(Success rate 50%)\n\n2) Leave it.\n\n3) Unlock it by the key.\n\n";
    }
    cout << "-------------------------------------------------\n";
    do{
        cout << "Your answer: ";
        cin >> answer;
        cout << "-------------------------------------------------\n";
        if(answer == 1){
            int x = rand()%100 + 1;
            if(x > 50){
                system("cls");
                cout << "-------------------------------------------------\n";
                cout << "You've tried to break it. It's broken down\nThere is a sword inside.\n";
                cout << "You got a sword.\n";
                cout << "-------------------------------------------------\n";
                break;
            }else{
                system("cls");
                cout << "-------------------------------------------------\n";
                cout << "You tried to break it until your hand broke but it seems like nothing happen.\n";
                cout << "You're life point -1.\n";
                cout << "-------------------------------------------------\n";
                break;
            }
        }
        if(answer == 2){
            system("cls");
            cout << "-------------------------------------------------\n";
            cout << "You left the chest.\n";
            cout << "You continue the travel.\n";
            cout << "-------------------------------------------------\n";
            break;
        }
        if(answer == 3 && haveKey == true){
            system("cls");
            cout << "-------------------------------------------------\n";
            cout << "You've unlocked it.\nThere is a sword inside.\n";
            cout << "You got a sword.\n";
            cout << "-------------------------------------------------\n";
            break;
        }
    }while(true);
    pressenter();
    answer = 0;
}