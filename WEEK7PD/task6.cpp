#include<iostream>
using namespace std;
void patient2(int);
main()
{
    int days,patient;
    cout<<"enter number of days :";
    cin>>days;
    patient2(days);
}
void patient2(int days)
{
    int treated = 0;
    int untreated = 0;
    int doctor = 7;
    int patient;
    int n1,n2;
for(int i = 1;i <= days;i++){
        cout<<"enter patient on day :"<<i<<" ";
        cin>>patient;
        if(i == 3){
            if(untreated > treated){
                doctor = doctor+1;
            }
        }
        if(patient <= doctor){
            
            treated = treated+patient;
            
        }else if(patient > doctor){
            n1 = patient-doctor;
            treated = treated+doctor;
            untreated = untreated+n1;
        }

    }
    cout<<"treated patients are "<<treated<<endl;
    cout<<"untreated patients are "<<untreated<<endl;
}