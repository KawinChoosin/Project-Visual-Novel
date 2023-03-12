#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"Opening.cpp"
#include"SideEvent.cpp"
#include"MainEventAvn.cpp"
#include"MainEventRsq.cpp"
#include"MainEventSdl.cpp"
using namespace std;

#define hpcheck if(hp <= 0) playerLose();pressEnter();return 0;

int main(){
    srand(time(NULL));
    while(true){
        bool aventurine, quartz, sodalite, fluorite, tourmaline, howlite, amethyst; // เช็คชนิดของคริสตัล
        bool vase;
        int gems = 0; // จำนวนของหินที่เก็บได้แล้ว
        int money = 60; // ค่าเงิน
        int maxhp = 1; // ค่า maxhp
        int hp = 5; // ค่า hp
        int potion = 0;
        int vase = 0;
        Opening();
        Avn(hp, money, aventurine);
        hpcheck;
        FoundWoman(hp);
        hpcheck;
        Tavern(money, hp, maxhp);
        FoundGirl(money);
        sideEventPeddler(money, aventurine, fluorite, potion);
    }
}
