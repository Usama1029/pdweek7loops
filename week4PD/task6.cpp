#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x , int y){
    COORD coordinates ;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}
void print(int x,int y);
main()
{ 
    system("CLS");
   
    int x = 6;
    int y = 9;
     gotoxy(x,y);
    print(x,y);
}
void print(int x,int y){
    cout<<"A"<<endl;
    cout<<"W"<<endl;
    cout<<"A"<<endl;
    cout<<"I"<<endl;
    cout<<"S"<<endl;
}