#include<iostream>
using namespace std;
void checklocation(int h,int x,int y);
main()
{
    int h,x,y;
    cout<<"enter the size of blocks(h):";
    cin>>h;
    cout<<"enter x coordinates :";
    cin>>x;
    cout<<"enter y coordinates :";
    cin>>y;
    checklocation(h,x,y);

}
void checklocation(int h,int x,int y)
{
int n1,n2,n3,n4,n5,n6;
 n1 = 2*x;
 n2 = 4*y;
 n3 = 1*h;
 n4 = 2*h;
 n5 = 3*h;
 n6 = 4*h;

 if(x >  n1 || y > n2){
    cout<<"OUTSIDE";

 }else if( x < n3 && y <n3){
    cout<<"INSIDE";
 }else if( x > n3 && x < n4){
    if(y < n6){
        cout<<"INSIDE";
    }
 }else if( x > n4 && x < n5){
    if(y < n3){
        cout<<"INSIDE";
    }
 }else if( x == 0 || x == n3 || x == n4 || x == n5){
    if( y == 0 || y == n3 || y == n4 || y == n5 || y == n6){
        cout<<"BORDER LINE ";
    }
 }else{
    cout<<"OUTSIDE";
 }
}