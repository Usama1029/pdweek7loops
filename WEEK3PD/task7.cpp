#include<iostream>
using namespace std;
main(){
 string movie_name;
 int adult_price,child_price,adult_sold,child_sold,charity,total;
 float total_income,donation;
 cout<<"enter the movie name "<<endl;
 cin>>movie_name;
 cout<<"enter tickets price for adults "<<endl;
 cin>>adult_price;
 cout<<"enter tickets price for child "<<endl;
 cin>>child_price;
 cout<<"enter sold tickets of adults "<<endl;
 cin>>adult_sold;
 cout<<"enter sold tickets for child "<<endl;
 cin>>child_sold;
 cout<<"enter percentage for charity donation "<<endl;
 cin>>charity;
  total = (adult_price*adult_sold) + (child_price*child_sold);
  donation = (total/100.0)*charity;
  total_income = total-donation;
  cout<<"total amount generated is "<<total<<endl;
  cout<<"total amount after donation "<<total_income;


}