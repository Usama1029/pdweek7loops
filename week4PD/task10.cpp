#include<iostream>
using namespace std;
void print();
main()
{
    print();
    
}
 void print()
 {
 int price;
 float discount;
 float payable;
    string contry;
    while(true){
    cout<<"enter  contry name(pakistan,india,ireland,england,canada) :"<<endl;
    cin>>contry;
    cout<<"enter your ticket price :"<<endl;
    cin>>price;
    if(contry == "pakistan")
    {
        discount = (5/100.0)*price;
        payable = price-discount;
        cout<<"you pay this price after discount :"<<payable;
    }
    if(contry == "ireland"){
      discount = (10/100.0)*price;
        payable = price-discount;
        cout<<"you pay this price after discount :"<<payable;  
    }
    if(contry == "india")
    {
        discount = (20/100.0)*price;
        payable = price-discount;
        cout<<"you pay this price after discount :"<<payable;
    }
    if(contry == "england")
    {
        discount = (30/100.0)*price;
        payable = price-discount;
        cout<<"you pay this price after discount :"<<payable;
    }
    if(contry == "canada")
    {
        discount = (45/100.0)*price;
        payable = price-discount;
        cout<<"you pay this price after discount :"<<payable;
    }
     cout<<endl;  }
 }