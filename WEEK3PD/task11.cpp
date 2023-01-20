#include<iostream>
using namespace std;
main(){
    int number,num1;
    int sum = 0;
    cout<<"enter five digits number "<<endl;
    cin>>number;
    num1 = number%10;
    sum = sum+num1;
    num1 = number/10;
    number = num1%10;
    sum = sum+number;
    number = num1/10;
    
    num1 = number%10;
    sum = sum+num1;
    num1 = num1/10;
    number = num1%10;
    sum = sum+number;
    number = num1/10;
    cout<<"the sum of integers is "<<sum;
    
    
    
}