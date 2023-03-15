#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"Opening.cpp"
#include"SideEvent.cpp"
#include"MainEventAvn.cpp"
#include"MainEventRsq.cpp"
#include"MainEventSdl.cpp"
#include"MainEventFlr.cpp"
#include"MainEventAmt.cpp"
#include"Monster.cpp"
#include"end.cpp"
using namespace std;

#define hpcheck if(hp <= 0) playerLose();pressEnter();return 0;


bool aventurine, rosequartz, sodalite, fluorite, tourmaline, howlite, amethyst; // เช็คชนิดของคริสตัล
bool vase;
int gems = 0; // จำนวนของหินที่เก็บได้แล้ว
int money = 60; // ค่าเงิน
int maxhp = 1; // ค่า maxhp
int hp = 5; // ค่า hp
int potion = 0;
bool g1,g2,g3,g4,g5;

int main(){
    srand(time(NULL));
    while(true){
        Opening();///

        Avn(hp, money, aventurine);//
        hpcheck;

        werewolf(hp, money, aventurine, rosequartz, sodalite, fluorite, amethyst);
        hpcheck;

        Rsq(hp, money, rosequartz, vase);//
        hpcheck;

        bandit(hp, money, aventurine, rosequartz, sodalite, fluorite, amethyst);
        hpcheck;

        Tavern(money, hp, maxhp);
        hpcheck;

        Sdl(hp, money, sodalite, vase);//
        hpcheck;

        FoundWoman(hp);
        hpcheck;

        skeletons(hp, money, aventurine, rosequartz, sodalite, fluorite, amethyst);
        hpcheck;


        Flr(hp, money, fluorite);//
        hpcheck;

        sideEventPeddler(money, aventurine, fluorite, potion);
        hpcheck;

        orc(hp, money, aventurine, rosequartz, sodalite, fluorite, amethyst);
        hpcheck;

        Amt(hp, money, amethyst);//
        hpcheck;

        FoundGirl(money);
        hpcheck;

        wizard(hp, money, aventurine, rosequartz, sodalite, fluorite, 
        amethyst);
        hpcheck;

        End(g1,g2,g3,g4,g5);///
        hpcheck;
    }
}

