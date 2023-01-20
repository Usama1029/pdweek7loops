#include<iostream>
using namespace std;
void print(int);
void lowside(int);
main()
{
    int rows;
    cout<<"enter number of rows :";
    cin>>rows;
    print(rows);
    lowside(rows);

}
void print(int rows)
{
    int n1;
    n1 = rows/2;
    for(int i = 1;i <= n1;i++){
        for(int j = n1;j > i;j--){
            cout<<" ";
        }
        for(int k = 1;k <=i;k++){
            cout<<"*";
        }cout<<endl;
    }
}
void lowside(int rows)
{
    int n2;
    n2 = rows/2;
    for(int i = 1;i <= n2;i++){
       for(int k = 1;k < i;k++){
        cout<<" ";
       }for(int j = n2;j >= i;j--){
        cout<<"*";
       }cout<<endl;
    }
}
