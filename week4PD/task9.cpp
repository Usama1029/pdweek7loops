#include<iostream>
using namespace std;
void reverse(string);
main(){
    string word;
    cout<<"enter true or false "<<endl;
    cin>>word;
    reverse(word);

}
 void reverse(string word)
 {
    if (word == "true"){
        cout<<"False";
    }
    if(word != "true"){
        cout<<"true";
    }
 }