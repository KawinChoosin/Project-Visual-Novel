//Tester//
int main(){
    int hp,money;
    bool aventurine;
    Avn(hp,money,aventurine);
}



//Choice Ask//
do{
    cout<<"Your Choice: ";
    cin>>answer;
    if(answer!=1&&answer!=2){
        cout<<"Wrong answer, Try again.";
        continue;
    }break;
}while(true);
            
            
            
//Lose Coin//
cout<<"-----------------------------------------\n";
cout<<"\nYou lose 15 coins \nYour coins: "<<money<<"  (-15)\n";
cout<<"-----------------------------------------\n";

//Lose HP//
cout<<"-----------------------------------------\n";
cout<<"\nYou lose 15 hp.\nYour hp: "<<hp<<"  (-15)\n";
cout<<"-----------------------------------------\n";





//Clue letter and Let's Continue//
if(rosequartz==1){
        cout<<"-----------------------------------------\n";
        cout<<"YOU GOT A SECOND CLUE LETTER \'N\'\n";
        cout<<"-----------------------------------------\n";
    }
    pressEnterRsq();
    cout<<("\n*****************************************************************\n");
    cout<<("\n          LET\'S CONTINUE THE JOURNEY ! \n\n");
    cout<<("*****************************************************************\n");
    pressEnterRsq();




//Normal Frame Length//
dialogRsq.push_back
("*****************************************************************\n");