#include<iostream>
using namespace std;
main(){
   int  st_s1,st_s2,st_s3,st_s4,st_s5,st_s22,st_s23,st_s21,st_s24,st_s25;
   cout<<"enter marks for student 1 of subject 1 "<<endl;
   cin>>st_s1;
    cout<<"enter marks for student 1 of subject 2 "<<endl;
   cin>>st_s2;
    cout<<"enter marks for student 1 of subject 3 "<<endl;
   cin>>st_s3;
    cout<<"enter marks for student 1 of subject 4 "<<endl;
   cin>>st_s4;
    cout<<"enter marks for student 1 of subject 5 "<<endl;
   cin>>st_s5;
    cout<<"enter marks for student 2 of subject 1 "<<endl;
   cin>>st_s21;
    cout<<"enter marks for student 2 of subject 2 "<<endl;
   cin>>st_s22;
    cout<<"enter marks for student 2 of subject 3 "<<endl;
   cin>>st_s23;
    cout<<"enter marks for student 2 of subject 4 "<<endl;
   cin>>st_s24;
    cout<<"enter marks for student 2 of subject 5 "<<endl;
   cin>>st_s25;
   int result1 = st_s1+st_s2+st_s3+st_s4+st_s5;
int result2 = st_s21+st_s22+st_s23+st_s24+st_s25;
float per1 = (result1/500.0)*100;
float per2 = (result2/500.0)*100;
float avverage = (per1+per2)/2;
cout<<"the average is "<<avverage;
}