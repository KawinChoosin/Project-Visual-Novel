#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"Opening.cpp"
#include"SideEvent.cpp"
using namespace std;

int main(){
    srand(time(NULL));
    while(true){
        bool aventurine, quartz, sodalite, fluorite, tourmaline, howlite, amethyst; // เช็คชนิดของคริสตัล
        int gems = 0; // จำนวนของหินที่เก็บได้แล้ว
        int money = 60; // ค่าเงิน
        int maxhp = 3; // ค่า maxhp
        int hp = 1; // ค่า hp
        int potion = 0;
        Opening();
        FoundWoman(hp);
        if(hp <= 0){
            playerLose();
            pressEnter();
            int answer;
            cout << "\n\nType 1 if you want to play again: ";
            cin >> answer;
            if(answer == 1) continue;
            else break;
        }
        Tavern(money, hp, maxhp);
        FoundGirl(money);
        sideEventPeddler(money, aventurine, fluorite, potion);
    }
}
