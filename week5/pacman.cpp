#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void printpacman(int,int);
void gotoxy(int,int);
void printerase(int,int);
void printpace(int,int);
Char getCharAtxy(short int x,short int y);
main()
{
    int pacmanx = 4;
    int pacmany = 4;
    bool gameruning = true;
    system("cls");
        printmaze();
        printpacman(pacmanx,pacmany);
        while(gameruning){
            if(GetAsyncKeyState(VK_LEFT)){
                char nextlocation = getCharAtxy
                
                
                
                
                
            
            
                
                
                
                
                (pacmanx-1,pacmany);
                if(nextlocation == ' '){
                 printerase(pacmanx,pacmany);
                pacmanx = pacmanx-1;
                printpace(pacmanx,pacmany);
                }
                

            }if(GetAsyncKeyState(VK_RIGHT)){
                gotoxy(pacmanx,pacmany);
                cout<<" ";
                pacmanx = pacmanx+1;
                gotoxy(pacmanx,pacmany);
                cout<<"p";
            }if(GetAsyncKeyState(VK_UP)){
                gotoxy(pacmanx,pacmany);
                cout<<" ";
                pacmany = pacmany-1;
                gotoxy(pacmanx,pacmany);
                cout<<"p";
            }if(GetAsyncKeyState(VK_DOWN)){
                gotoxy(pacmanx,pacmany);
                cout<<" ";
                pacmany = pacmany+1;
                gotoxy(pacmanx,pacmany);
                cout<<"p";
            }if(GetAsyncKeyState(VK_ESCAPE)){
                gameruning = false;
            }
            Sleep(200);
        }
}
void printmaze()
{
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%                     %"<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

}
void printpacman(int x,int y){
    gotoxy(x,y);
    cout<<"p";
}
void gotoxy(int x,int y){
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    }
    void printerase(int pacmanx,int pacmany){
        gotoxy(pacmanx,pacmany);
        cout<<" ";
    }
    void printpace(int pacmanx,int pacmany){
        gotoxy(pacmanx,pacmany);
        cout<<"p";
    }
    char getCharAtxy(short int x,short int y)
    {
        CHAR_INFO ci;
        COORD xy = {0,0};
        SMALL_RECT rect = {x,y,x,y};
        COORD coordBufSize;
        coordBufSize.X = 1;
        coordBufSize.Y = 1;
        return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize, xy, &rect) ? ci.Char.AsciiChar : " ";
    }