#include<iostream>
using namespace std;

main(){
 int bagsizepound,costofbag,areabag,cost_fertilizer,cost_perarea;
 cout<<"enter the size of fertilizer in pounds "<<endl;
 cin>>bagsizepound;
 cout<<"enter the cost of bag "<<endl;
 cin>>costofbag;
 cout<<"enter the are in squre feet covered by bag "<<endl;
 cin>>areabag;
   cost_fertilizer = costofbag / bagsizepound;
   cost_perarea = bagsizepound*areabag;
   cout<<"cost of fertilizer per pound "<<cost_fertilizer<<endl;
   cout<<"cost of fertilizing the area per squre feet "<<cost_perarea;
  
    
}