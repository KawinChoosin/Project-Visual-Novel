#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>
#include"Opening.cpp"
#include"SideEvent.cpp"
using namespace std;

bool aventurine, quartz, sodalite, fluorite, tourmaline, howlite, amethyst; // เช็คชนิดของคริสตัล
int money = 60; // ค่าเงิน
int maxhp = 3; // ค่า maxhp
int hp = 3; // ค่า hp
int potion = 0;

int main(){
    srand(time(NULL));
    Tavern(money, hp, maxhp);
    Opening();
    FoundGirl(money);
    sideEventPeddler(money, aventurine, fluorite, potion);
}
