#include<iostream>
using namespace std;

bool isequal(int,int);
main()
{
    int number1,number2;
    cout<<"enter number :"<<endl;
    cin>>number1;
    cout<<"enter number :"<<endl;
    cin>>number2;
    int check;
    check = isequal(number1,number2);
    cout<< check;

}
bool isequal(int number1,int number2)
{
    if( number1 == number2){
        return true;
    }
    if(number1 != number2){
        return false;
    }
}