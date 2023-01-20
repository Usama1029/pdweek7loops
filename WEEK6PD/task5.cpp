#include<iostream>
using namespace std;
float price(string fruit,string day,int quantity);
main()
{
    string fruit,day;
    int quantity;
    cout<<"enter name of fruit :";
    cin>>fruit;
    cout<<"enter day of week :";
    cin>>day;
    cout<<"enter quantity :";
    cin>>quantity;
    float amnt = price(fruit,day,quantity);
    cout<<"you should pay "<<amnt;

}
float price(string fruit,string day,int quantity)
{
    float n1,n2,n3;
if(fruit == "banana"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*2.50;
    }else{
        n1 = quantity*2.70;
    }
}else if(fruit == "apple"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*1.20;
    }else{
        n1 = quantity*1.25;
    }
}else if(fruit == "orange"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*0.85;
    }else{
        n1 = quantity*0.90;
    }
}else if(fruit == "grapefruit"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*1.45;
    }else{
        n1 = quantity*1.60;
    }
}else if(fruit == "kiwi"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*2.70;
    }else{
        n1 = quantity*3.0;
    }
}else if(fruit == "pineapple"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*5.50;
    }else{
        n1 = quantity*5.60;
    }
}else if(fruit == "grapes"){
    if(day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday"){
        n1 = quantity*3.85;
    }else{
        n1 = quantity*4.20;
    }
}
return n1;
}