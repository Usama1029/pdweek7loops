#include<iostream>
using namespace std;
// find final velocity
main(){
 
  int acceleration,velocity1,time,final_velocity;
  cout<<"enter initial velocity "<<endl;
  cin>>velocity1;
  cout<<"enter time "<<endl;
  cin>>time;
  cout<<"enter accelaration "<<endl;
  cin>>acceleration;
  final_velocity = (acceleration*time ) + velocity1;
  cout<<"total final velocity is :"<<final_velocity;
    
}