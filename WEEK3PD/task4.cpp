#include<iostream>
using namespace std;
// calculate percentage of subjects
main(){
 int sub1,sub2,sub3,sub4,sub5;
 float result;
 cout<<"enter obtained marks in subject 1 "<<endl;
 cin>>sub1;
 cout<<"enter marks of subject 2 "<<endl;
 cin>>sub2;
 cout<<"enter marks of subject 3 "<<endl;
 cin>>sub3;
 cout<<"enter marks of subject 4 "<<endl;
 cin>>sub4;
 cout<<"enter marks of subject 5 "<<endl;
 cin>>sub5;
  int total = sub1+sub2+sub3+sub4+sub5;
   result = (total /500.0) *100;
   cout<<"marks in percentage "<<result;
  
    
}