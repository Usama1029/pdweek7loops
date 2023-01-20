#include<iostream>
using namespace std;
void calculate(int cargo);
main()
{
    int cargo;
    cout<<"enter cargo for transformation :";
    cin>>cargo;
    calculate(cargo);

}
void calculate(int cargo)
{
    int num;
    int sum = 0;
    float p7;
     int p4,p5,p6,p8;
     float p1 = 0;
     float p2 = 0;
     float p3 = 0;
     for(int i = 1;i<= cargo;i++){
       cout<<"enter tonnage of current cargo : ";
       cin>>num;
       sum = sum+num;
       if(num >0 && num <= 3){
        p1 = p1+num;
       }else if(num >3 && num <= 11){
        p2 = p2+num;
       }else{
        p3 = p3+num;

       }
     }
     p4 = (p1/sum)*100.0;
     p5 = (p2/sum)*100.0;
     p6 = (p3/sum)*100.0;

     p7 = (p1*200 + p2*175 +p3*120)/sum;
     cout<<p7<<endl;
     cout<<"p1 is :"<<p4<<endl;
     cout<<"p2 is :"<<p5<<endl;
     cout<<"p3 is :"<<p6;


}