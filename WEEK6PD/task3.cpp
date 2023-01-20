#include<iostream>
using namespace std;
void symbol(string month,int date);
main()
{
    string month;
    int date;
    cout<<"enter month of birth:";
    cin>>month;
    cout<<"enter date of birth :";
    cin>>date;
    symbol(month,date);

}
void symbol(string month,int date){
 if(month == "january"){
    if(date >= 1 && date <= 19){
        cout<<"CAPRICORN";
    }else{
        cout<<"AQUARIES";
    }
 }else if(month == "february"){
    if(date >= 1 && date <=18){
        cout<<"AQUARIES";
    }else{
        cout<<"PISCES";
    }
 }else if(month == "march"){
    if(date >= 1 && date <=20 ){
        cout<<"PISCES";
    }else{
        cout<<"ARIES";
    }
 }else if(month == "april"){
    if(date >= 1 && date <= 19){
        cout<<"ARIES";
    }else{
        cout<<"TAURUS";
    }
 }else if(month == "may"){
    if(date >= 1 && date <= 20){
        cout<<"TAURUS";
    }else{
        cout<<"GEMINI";
    }
 }else if(month == "june"){
    if(date >=1 && date <=20){
        cout<<"GEMINI";
    }else{
        cout<<"CANCER";
    }
 }else if(month == "july"){
    if(date >= 1 && date <= 22){
        cout<<"CANCER";
    }else{
        cout<<"LEO";
    }
 }else if(month == "august"){
    if(date >= 1 && date <= 22){
        cout<<"LEO";
    }else{
        cout<<"VIRGO";
    }
 }else if(month == "september"){
    if(date >= 1 && date <=22){
        cout<<"VIRGO";
    }else{
        cout<<"LIBRA";
    }
 }else if(month == "october"){
    if(date >= 1 && date <=22){
        cout<<"LIBRA";
    }else{
        cout<<"SCORPIO";
    }
 }else if(month == "november"){
    if(date >= 1 && date <= 21){
        cout<<"SCORPIO";
    }else{
        cout<<"SAGGITARIUS";
    }
 }else if(month == "december"){
    if(date >= 1 && date <= 21){
        cout<<"SAGGITARIUS";
    }else{
        cout<<"CAPRICORN";
    }
 }
}