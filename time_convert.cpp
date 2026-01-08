#include<iostream>
using namespace std;


int main(){
    int sec,h,m,s;
    
    cout<<"enter second";
    cin>>sec;

    h = sec/3600;
    m = (sec % 3600)/60;
    s = sec%60;
    cout<<h<<":"<<m<<":"<<s<<endl;

    
    cout<<"enter hour:";
    cin>>h;

   
    cout<<"enter minute:";
    cin>>m;

  
    cout<<"enter second:";
    cin>>s;
 
    cout <<"tota second"<<(h*3600+m*60+s)<<endl;

}
