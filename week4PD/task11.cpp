#include<iostream>
using namespace std;
main()
{
    int speed;
    cout<<"enter your speed :"<<endl;
    cin>>speed;
    if(speed <= 100)
    {
        cout<<"perfect ! you are going good :"<<endl;
    }
    if(speed >100){
        cout<<"halt......you will be challenged :"<<endl;
    }
}