#include<iostream>
using namespace std;
main(){
  float vegetable_price,fruit_price,vegetable_income,fruit_income,total,total_rupees;
  int vegetable_amount,fruit_amount;
  cout<<"enter vegetable price per kilogram "<<endl;
  cin>>vegetable_price;
  cout<<"enter fruit price per kilogram "<<endl;
  cin>>fruit_price;
  cout<<"enter total kilogram of vegetanle "<<endl;
  cin>>vegetable_amount;
  cout<<"enter total kilogram of fruit "<<endl;
  cin>>fruit_amount;
  vegetable_income = vegetable_price*vegetable_amount;
  fruit_income = fruit_amount*fruit_price;
   total = vegetable_income+fruit_income;
    total_rupees = total/1.94;
    cout<<"total earning in rupees "<<total_rupees;   




}