#include<iostream>
using namespace std;
void bill(string month,int stays);
main()
{
    string month;
    int stays;
    cout<<"enter month (june,july,august,september,october,may):";
    cin>>month;
    cout<<"enter number of stays :";
    cin>>stays;
    bill(month,stays);

}
void bill(string month,int stays)
{
    float n1,n2,n3,n4,n5,n6;
if(month == "may" || month == "october"){
 if(stays <= 7){
    n1 = 50*stays;
    n2 = 65*stays;
    cout<<"studio :"<<n1<<endl;
    cout<<"apartment :"<<n2;
 }else if(stays >7 && stays <= 14){
    n1 = 50*stays;
    n2 = (5/100.0)*n1;
    n3 = n1-n2;
    n4 = 65*stays;
    cout<<"stodio :"<<n3<<endl;
    cout<<"apartment :"<<n4;

 }else if(stays > 14){
    n1 = 50*stays;
    n2 = 65*stays;
    n3 = (30/100.0)*n1;
    n4 = (10/100.0)*n2;
    n5 = n1-n3;
    n6 = n2-n4;
    cout<<"studio :"<<n5<<endl;
    cout<<"apartment :"<<n6;



 }
}else if(month == "june" || month == "september"){
    if(stays <= 14){
        n1 = stays*75.20;
        n2 = stays*68.70;
        cout<<"studio :"<<n1<<endl;
        cout<<"apartment :"<<n2;

    }else if(stays > 14 ){
        n1 = stays*75.20;
        n2 = stays*68.70;
        n3 = (20/100.0)*n1;
        n4 = (10/100.0)*n2;
        n5 = n1-n3;
        n6 = n2-n4;
        cout<<"studio :"<<n5<<endl;
        cout<<"apartment :"<<n6;

    }
}else if(month == "july" || month == "august"){
    if(stays <=14){
        n1 = 76*stays;
        n2 = 77*stays;
        cout<<"studio :"<<n1<<endl;
        cout<<"aparment :"<<n2;

    }else if(stays >14){
        n1 = 76*stays;
        n2 = 77*stays;
        n3 = (10/100.0)*n2;
        n4 = n2-n3;
        cout<<"studio :"<<n1<<endl;
        cout<<"apartment :"<<n4;
    }
}else{
    cout<<"invalid try again!";
}
}