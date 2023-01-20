#include<iostream>
using namespace std;
float taxcalculate(char,int);
main(){
    char type;
    int itemp;
    cout<<"enter the item price of vihcle :"<<endl;
    cin>>itemp;
    cout<<"enter type of vihicle(T,M,E,S,V) :"<<endl;
    cin>>type;
    float result = taxcalculate(type,itemp);
   float final_price = result+itemp;
    cout<<"the final price on vehicle on a type of "<<type<<" adding the tax is "<<result<<"  now final price is "<<final_price;
}
float taxcalculate(char type,int itemp)
{ 
    float n1,n2,tax;
    if( type == 'M')
    {
     tax = (6/100.0)*itemp;

    }if(type == 'E')
    {
        tax = (8/100.0)*itemp;
    }if(type == 'S')
    {
        tax = (10/100.0)*itemp;
    }if(type == 'V')
    {
        tax = (12/100.0)*itemp;
    }if(type == 'T'){
        tax = (15/100.0)*itemp;
    }
    return tax;
}