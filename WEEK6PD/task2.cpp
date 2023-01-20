#include<iostream>
using namespace std;
void marks(string name,int sub1,int sub2,int sub3,int sub4,int sub5);
main()
{
    string name;
    int sub1,sub2,sub3,sub4,sub5,result,n2;
    char GRADE;
    cout<<"enter student name :";
    cin>>name;
    cout<<"enter marks in subject 1:";
    cin>>sub1;
    cout<<"enter marks in subject 2:";
    cin>>sub2;
    cout<<"enter marks in subject 3:";
    cin>>sub3;
    cout<<"enter marks in subject 4:";
    cin>>sub4;
    cout<<"enter marks in subject 5:";
    cin>>sub5;
    int total = sub1+sub2+sub3+sub4+sub5;
    float perc = (total/500.0)*100;
    cout<<"NAME "<<name<<" TOTAL MARKS "<<total<<" TOTAL percentage "<<perc<<endl;
    cout<<"grade is ";
    marks(name,sub1,sub2,sub3,sub4,sub5);


}
void marks(string name,int sub1,int sub2,int sub3,int sub4,int sub5)
{
    float n1 = sub1+sub2+sub3+sub4+sub5;
    float n2 = (n1/500.0)*100;
    if(n2 < 40){
        cout<<"F";
    }else if(n2 >= 40 && n2 < 50){
        cout<<"D";
    }else if(n2 >= 50 && n2 <60){
        cout<<"C";
    }else if(n2 >= 60 && n2 <70){
        cout<<"B";
    }else if(n2 >= 70 && n2 <80){
        cout<<"B+";
    }else if(n2 >= 80 && n2 <90){
        cout<<"A";
    }else if(n2 >= 90 && n2 <= 100){
        cout<<"A+";
    }
}