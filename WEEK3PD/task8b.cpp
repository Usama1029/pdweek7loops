#include<iostream>
using namespace std;
main(){
  int number,n1,n2,n3,n4,n5,n6;
  int sum = 0;
  cout<<"enter four digit number "<<endl;
  cin>>number;
  n1 =   number%10;
  n2 = number/10;
  sum = sum+n1;
  n3 = n2%10;
  n4 = n2/10;
  sum = sum+n3;
  n5 = n4%10;
  n6 = n4/10;
  sum = sum+n5;
  sum = sum+n6;
  cout<<"total sum of number is "<<sum;




}