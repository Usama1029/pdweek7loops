#include<iostream>
using namespace std;
void header();
void menu();
main()
{
    header();
    menu();
}
void header()
{
    cout<<"*************************************************** "<<endl;
    cout<<"*  university admission managment system           *"<<endl;
    cout<<"*****************************************************"<<endl;
}
void menu()
{
    string std1name,std2name;
    int std1inter,std1ecat,std1matric,std2matric,std2inter,std2ecat;
    cout<<"welcome to uams "<<endl;
    cout<<"chose your option "<<endl;
    cout<<"enter your name "<<endl;
    cin>>std1name;
    cout<<"enter matric marks "<<endl;
    cin>>std1matric;
    cout<<"enter inter marks "<<endl;
    cin>>std1inter;
    cout<<"enter ecat marks "<<endl;
    cin>>std1ecat;
    cout<<"enter your name "<<endl;
    cin>>std2name;
    cout<<"enter matric maarks(1100) "<<endl;
    cin>>std2matric;
     cout<<"enter inter marks(550) "<<endl;
    cin>>std2inter;
    cout<<"enter ecat marks(400) "<<endl;
    cin>>std2ecat;
    float aggre1,aggre2;
aggre1 = (std1ecat/400.0)*40 + (std1inter/550.0)*30 +(std1matric/1100.0)*30;
aggre1 = (std2ecat/400.0)*40 + (std2inter/550.0)*30 +(std2matric/1100.0)*30;
    if(aggre1 > aggre2)
    {
        cout<<" the roll number 1 of the student is "<<std1name <<" as his aggregrate is "<<aggre1<<endl;

    }
    if(aggre1 < aggre2)
    {
      cout<<" the roll number 1 of the student is "<<std2name <<" as his aggregrate is "<<aggre2<<endl;  
    }




























    
    }