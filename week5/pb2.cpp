#include<iostream>
using namespace std;
void volume(int,int,int,string);
main()
{
    int h,w,l;
    string unit;
    cout<<"enter hight :"<<endl;
    cin>>h;
    cout<<"enter width :"<<endl;
    cin>>w;
    cout<<"enter length :"<<endl;
    cin>>l;
    cout<<"enter unit(centimeters,milimeter,kilometer) :"<<endl;
    cin>>unit;
    volume(h,w,l,unit);

}
void volume(int h,int w,int l,string unit)
{
    float num1,num2;
    num1 = h*w*l;
    if(unit == "centimeters"){
        num2 = num1*1000000;
        cout<<"volume of pyramids is : "<<num2<<" cubic centimeter";
    }if(unit == "kilometer"){
        num2 = num1/1000000000;
        cout<<"volume of pyramids is : "<<num2<<" cubic kiloimeter";
    }if(unit == "milimeter"){
        num2 = num1*1000000000;
        cout<<"volume of pyramids is : "<<num2<<" cubic milimeter";
    }
}