#include<iostream>
using namespace std;



void askforchoice(bool answer=0){
do{
    cout<<"Your Choice: ";
    cin>>answer;
    if(answer!=1&&answer!=2){
        cout<<"Wrong answer, Try again.";
        continue;
    }break;
}while(true);
}
            
            
cout<<"-----------------------------------------\n";
cout<<"\nYou lose 15 coins \nYour coins: "<<money<<"  (-15)\n";
cout<<"-----------------------------------------\n";