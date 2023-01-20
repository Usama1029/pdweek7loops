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
    int rows2 = rows*2-2;

      for(int i = 1;i<= rows;i++){
        for(int x = 1;x <=i;x++){
            cout<<"*";
        }
      for(int j = 1;j<= rows2;j++){
        cout<<" ";
       
      }for(int k = 1;k<=i;k++){
        cout<<"*";
      }
       rows2 = rows2-2;
        cout<<endl;
      }
}