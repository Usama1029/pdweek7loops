#include<iostream>
using namespace std;
void hourscalculate(int,int,int);
main()
{
    int hours,days,workers;
    cout<<"enter number of hours are needed :"<<endl;
    cin>>hours;
    cout<<"enter number of days :"<<endl;
    cin>>days;
    cout<<"enter number of workers :"<<endl;
    cin>>workers;
    hourscalculate(hours,days,workers);

}
void hourscalculate(int hours,int days,int workers)
{
    int n1,n3;
    float n2;
    n1 = days*10*workers;
    n2 = (10/100.0)*n1;
     n3 = n1-n2;
    if(n3 > hours){
        int n4 = n3-hours;
        cout<<"yes "<<n4<<" hours are left!";
    }if(n3 < hours){
      int  n4 = n3-hours;
        int n5 = (-1)*n4;
        cout<<"not enough time "<<n5<<" hours are needed";

    }
}