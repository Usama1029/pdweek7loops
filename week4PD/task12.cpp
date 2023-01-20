#include<iostream>
using namespace std;
void print();
main()
{
 print();   
}
void print()
{
    int  red,white,tulips;
    cout<<"enter number of red roses :"<<endl;
    cin>>red;
    cout<<"enter number pf white roses :"<<endl;
    cin>>white;
    cout<<"enter number of tulips roses :"<<endl;
    cin>>tulips;
    float price1,price2,price3,discount,total1,total2,total3;
    price1 = 2*red;
    price2 = 4.1*white;
    price3 = 2.5*tulips;
    float price = price1+price2+price3;
    if(price > 200){
    discount = (20/100.0)*price;
    total1 = price-discount;
    cout<<"original price is :"<<price<<endl;
    cout<<"price after discount :"<<total1<<endl;
    }
    if(price <=200){
        cout<<"price without discount is "<<price;
    }
    
}