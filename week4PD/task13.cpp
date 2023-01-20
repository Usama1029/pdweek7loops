#include<iostream>
using namespace std;
main(){
    int holiday;
    cout<<"enter number of holidays :"<<endl;
    cin>>holiday;
    int working;
    working = 365-holiday;
    int time = (working*63 + holiday*127);
    int differ = 30000-time;
    if(differ > 0)
    {
        int  t1 = (differ/60);
       int t2 = t1*60;
       int t3 = differ-t2;
       cout<<"tom sleep well "<<t1<<" hour and "<<t3<<" minutes less for play"<<endl;

    }
    if(differ < 0)
    {
       float differ2 = (-1)*differ;
        int  t1 = (differ2/60);
       int t2 = t1*60;
       int t3 = differ2-t2;
       cout<<"tom will run awaay "<<t1<<" hour and "<<t3<< " minutes for play "<<endl;
    }
}