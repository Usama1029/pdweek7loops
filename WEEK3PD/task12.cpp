#include<iostream>
using namespace std;
main(){
    int number,number1,sum;
    cout<<"enter number "<<endl;
    cin>>number;
    cout<<"enter number "<<endl;
    cin>>number1;
    int n1 = number%10;
    int n2 = number/10;
    int n3 = n2%10;
    int n4 = n2/10;
    int n5 = n4%10;
    int n6 = n4/10;
    int n7 = n6;
  int  sum1 = n1+n3;
   int sum2 = n7*n5;
  int  sum_num1 = sum1+sum2;
     int nn1 = number1%10;
    int nn2 = number1/10;
    int nn3 = nn2%10;
    int nn4 = nn2/10;
    int nn5 = nn4%10;
    int nn6 = nn4/10;
    int nn7 = nn6;
   int sum11 = nn1+nn3;
   int sum21 = nn7*nn5;
   int sum_num11 = sum11+sum21;
 sum = sum_num1+sum_num11;
 cout<<"total sum are "<<sum;

}