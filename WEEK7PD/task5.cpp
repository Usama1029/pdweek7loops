#include<iostream>
using namespace std;
int triangle(int number);
main()
{
    int number,result;
    cout<<"enter number for triangle :";
    cin>>number;
    result = triangle(number);
    cout<<result;

}
int triangle(int number)
{
   int sum = 0;
   for(int i = 1; i <= number;i++){
     sum = sum+i;
   }
   return sum;
}