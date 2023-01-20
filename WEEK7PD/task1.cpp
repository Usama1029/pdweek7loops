#include<iostream>
using namespace std;
void print(int);
main()
{
    int rows;
    cout<<"enter number of rows :";
    cin>>rows;
    print(rows);

}
void print(int rows)
{
    for(int i = 1;i <= rows; i++){
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    
    }
}