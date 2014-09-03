#include<stdio.h>
#include<iostream>
using namespace std;
int const MAX_COUNT = 101;
int thousend[1000];
int gun = 1;
void giveGunToNext()
{
    for(int i=gun+1;i<MAX_COUNT;i++){
        if(thousend[i]!=0){
            gun=thousend[i];
            cout<<"gun is with "<<thousend[i]<<endl;
            return;
        }
    }
    for(int i=1;i<gun;i++)
        if(thousend[i]!=0){
            gun=thousend[i];
            cout<<"gun is with "<<thousend[i]<<endl;
            break;
        }
}
void killNext()
{
    for(int i = gun+1;i<MAX_COUNT;i++){
        if(thousend[i]!=0){
            cout<<thousend[i]<<" is killed "<<endl;
            thousend[i]=0;
            giveGunToNext();
            return;
        }
    }
    for(int i=1;i<gun;i++){
        if(thousend[i]!=0){
             cout<<thousend[i]<<" is killed "<<endl;
            thousend[i]=0;
            giveGunToNext();
            break;
        }
    }
}
int main()
{
    for(int i=1;i<MAX_COUNT;i++)
        thousend[i]=i;
    while(1){
        killNext();
        int count = 0;
        for(int i =1;i<MAX_COUNT;i++){
            if(thousend[i]!=0)
                count ++;
        }
        if(count >1)
            continue;
        break;
    }
     for(int i = 1;i<MAX_COUNT;i++)
         if(thousend[i]!=0)
      cout<<"Answer is : "<<thousend[i]<<endl;
    return 0;
}
