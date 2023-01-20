#include<iostream>
using namespace std;
void weatherfind(string temp,string humndity);
main()
{
    string humndity,temp;
    cout<<"enter temperature (warm or cold):";
    cin>>temp;
    cout<<"enter humndity (humid or dry):";
    cin>>humndity;
    weatherfind(temp,humndity);
}
void weatherfind(string temp,string humndity)
{
    if(temp == "warm" && humndity == "dry")
    cout<<"play tennis";
    else if(temp == "warm" && humndity == "humid")
    cout<<"swim";
    else if(temp == "cold" && humndity == "dry")
    cout<<"play basketball";
    else if(temp == "cold" && humndity == "humid")
    cout<<"watch TV";
}