#include<iostream>
#include<ctime>
using namespace std;

int main(){
    int answer;
    srand(time(0));
    cout << "While you are traveling on your way, \nyou coincidently found a snake fighting a rat.\n";
    cout << "----------------------------------\n";
    cout << "What would you do?\n";
    cout << "1) Fight the snake.\n\n2) Fight the rat.\n\n3) Runaway\n(Success rate 50%)\n";
    cout << "----------------------------------\n";
    do{
        cout << "Your answer: ";
        cin >> answer;
        cout << "----------------------------------\n";
        if(answer == 1){
            cout << "You fought the snake.\n";
            cout << "The rat feel thank to you, he give you a key.\n";
            cout << "----------------------------------\n";
            break;
        }
        if(answer == 2){
            cout << "You fought the rat.\n";
            cout << "You loss the fight.\n";
            cout << "Your lifepoint -1\n";
            cout << "----------------------------------\n";
            break;
        }
        if(answer == 3){
            int x = rand()%100 + 1;
            if(x > 50){
                cout << "You ranaway.\n";
                cout << "----------------------------------\n";
                break;
            }else{
                cout << "They noticed you and changed target to you.\n";
                cout << "Your lifepoint -1\n";
                cout << "----------------------------------\n";
                break;
            }
        }
        else{
            cout << "----------------------------------\n";
            cout << "Invalid answer.\n";
            cout << "----------------------------------\n";
        } 
    }while(true);
}