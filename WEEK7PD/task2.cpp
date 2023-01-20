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
    for(int i = rows;i > 0; i--){
        for(int j = i;j > 0;j--){
            cout<<"*";
        }cout<<endl;
    
    }
}