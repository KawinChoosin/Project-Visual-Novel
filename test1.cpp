#include<iostream>
using namespace std;

int main(){
    int answer;
    int x=rand()%10+1;
    int y=rand()%10+1;
    cout<<x<<"*"<<y<<"=";
    cin>>answer;
    if(answer==x*y){
        cout<<"yes";
        
    }else{
        cout<<"no";
    }
}