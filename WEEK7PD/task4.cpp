#include<iostream>
using namespace std;
void amplify(int);
main()
{
    int number;
    cout<<"enter number :";
    cin>>number;
   amplify(number);
}
void amplify(int number)
{
    int n1,n2;
    for(int i = 1;i <= number;i++){
       n1 = i%4;
       if(n1 == 0){
        n2 = 10*i;
        cout<<n2<<",";
       }else{
        cout<<i<<",";
       }
       
    }
    

}