#include<iostream>
using namespace std;
void bill(char,int);
main()
{
    char type,time;
    int minut;
    cout<<"enter code for service(r or p):";
    cin>>type;
    cout<<"enter number of minuters used :";
    cin>>minut;
    bill(type,minut);

}
void bill(char type,int minut)
{
    float n1,n2,n3,n4;
    char time;
   if(type == 'r'){
    if(minut <= 50){
     n1 = 10;
     cout<<"total charges are :"<<n1;
    }else if(minut >50){
        n1 = minut-50;
        n2 = 10;
        n3 = n1*0.20;
        n4 = n2+n3;
        cout<<"total charges are :"<<n4;
    }
   }else if(type == 'p'){
     cout<<"enter time day or night(d or n) :";
     cin>>time;
     if(time == 'd'){
        if(minut <= 75){
            n1 = 25;
            cout<<"charges are :"<<n1;
        }else if(minut >75){
            n1 = minut-75;
            n2 = n1*0.10+25;
            cout<<"total charges are :"<<n2;
        }
     }else if(time == 'n'){
        if(minut <= 100){
            n1 = 25;
            cout<<"charges are :"<<n1;
        }else if(minut >100){
            n1 = minut-100;
            n2 = n1*0.05+25;
            cout<<"charges are :"<<n2;
        }
     }
   }
}