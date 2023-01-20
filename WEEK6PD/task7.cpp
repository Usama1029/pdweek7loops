#include<iostream>
using namespace std;
void check(int hour1,int hour2,int minut1,int minut2);
main()
{
    int hour1,hour2,minut1,minut2;
    cout<<"enter the exam starting hour (0 to 23) :";
    cin>>hour1;
    cout<<"enter the exam starting mint (0 to 59 ):";
    cin>>minut1;
    cout<<"enter the arrival hour in exam(0 to 23):";
    cin>>hour2;
    cout<<"enter the arrival mint in exam(0 to 59):";
    cin>>minut2;
    check(hour1,hour2,minut1,minut2);

}

void check(int hour1,int hour2,int minut1,int minut2)
{
    int n1,n2,n3;
    if(hour1 == hour2){
     if(minut1 == minut2){
        cout<<"on time!";
     }else if(minut1 > minut2){
        n1 = minut1-minut2;
        if(n1 <= 30){
            cout<<"on time "<<n1<<" minutes before the exam start!";
        }else if(n1 > 30){
            cout<<"early "<<n1<<" minutes before!";
        }
     }else{
        n3 = minut2-minut1;
        cout<<"late "<<n3<<" after the exam";
     }
      
    }else if(hour1 > hour2){
        n2 = hour1-hour2;
        n3 = 60-minut2;
        if(n2 == 1){
            if(n3 <= 30){
                cout<<"on time "<<n3<<" minutes before the exam start!";
            }else{
                cout<<"early "<<n3<<" mintes before the start!";
            }
        }else if(n2 > 1){
            cout<<"early "<<n2<<":"<<n3<<" minutes before exam!";
        }
    }else {
        int n5,n6,n7;
        n5 = hour2-hour1;
        n6 = 60-minut2;
        int n4 = (-1)*n2;
        cout<<"late "<<n5<<":"<<minut2<<" after the exam";

    }
}