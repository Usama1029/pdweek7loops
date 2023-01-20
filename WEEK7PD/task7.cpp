#include<iostream>
using namespace std;
void percentage(int number);
main()
{
    int number;
    cout<<"enter number :";
    cin>>number;
     percentage(number);
}
void percentage(int number)
{
    int num;
    float n1,n2,n3;
    float p1,p2,p3,p4,p5,p6;
    for(int i = 1;i<=number;i++){
        cout<<"enter number : ";
        cin>>num;
        n1 = num%2;
        n2 = num%3;
        n3 = num%4;
        if(n1 == 0){
            p1 = p1+1;

        } if(n2 == 0){
            p2 = p2+1;

        } if(n3 == 0){
            p3 = p3+1;

        }
         
    }
    
    p4 = (p1/number)*100.0;
    p5 = (p2/number)*100.0;
    p6 = (p3/number)*100.0;
     cout<<" p1 is "<<p4<<endl;
     cout<<"p2 is "<<p5<<endl;
     cout<<"p3 is "<<p6<<endl;
}