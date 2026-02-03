#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int rollnumber;

    public:
    void studentdata( string names,int rollnum){
        name=names;
        rollnumber=rollnum;
        cout<<"----- student----"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Roll Number : "<<rollnumber<<endl;
    }
};




class car{
    private:
    string model;
    int year;
    int speed;


    public:
    void setdata (string mod,int years,int speeds){
        model=mod;
        year=years;
        speed=speeds;

        cout<<"----------car------------"<<endl;
        cout<<"car model : " << model<<endl;
        cout<<"car year : " << year<<endl;
        cout<<"car speed : " << speed<<"km/h"<<endl;
        
    };
};


//que 3
class Device{
  protected:
  string brand;
  int powerconsumption;
};

class laptop: public Device{
    public:
    void setlaptop(string brands ,int power){
        brand=brands;
        powerconsumption=power;

cout<<"----------laptop------------"<<endl;
        cout<<"laptop brand : " << brand<<endl;
        cout<<" powerconsumption : " <<  powerconsumption<<"W"<<endl;


    };
    void Discount(){
        cout<<"laptop {" << brand <<"} : 5%"<<endl;
    }
};


class phone: public Device{
    public:
    void setsmartphone(string brands ,int power){
        brand=brands;
        powerconsumption=power;

cout<<"----------smartphone------------"<<endl;
        cout<<"smartphone brand : " << brand<<endl;
        cout<<" powerconsumption : " <<  powerconsumption<< "W" <<endl;


    };


    void calculateDiscount(){
        cout<<"smartphone {" << brand <<"} : 15%"<<endl;
    }
};

//que 5

class Animal{
protected:
string sound;
string move;

public:
 void makesound(string sounds){
    sound=sounds;
 };
  void makemove(string moves){
    move=moves;
  };
};

class Lion:public Animal{
    public:
    void lion(){
        makesound("roar");
        cout<<"Lion(sound) : "<<sound <<endl;
        makemove("prawl");
        cout<<"Lion(movement) : " << move << endl;
    }
};
class Fish : public Animal{
    public:
    void fish(){
        makesound("purrs");
        cout<<"Fish(sound) : "<<sound <<endl;
        makemove("swim");
        cout<<"Fish(movement) : " << move << endl;
    }
};




int main(){


    student s[3];
    s[0].studentdata("diya",200 );
    s[1].studentdata("bansi",201);
    s[2].studentdata("vibhuti",202);
    cout<< endl;


    car c[3];
    c[0].setdata("XUV",2024,200 );
    c[1].setdata("BMW",2020,210 );
    c[2].setdata("XUV",2021,180 );
cout<< endl;

    laptop l[3];
    l[0].setlaptop("Apple", 25);
    l[1].setlaptop("HP",45);
    l[2].setlaptop("lenovo", 50);
cout<< endl;


   phone p[3];
    p[0].setsmartphone("Apple", 60);
    p[1].setsmartphone("HP", 70);
    p[2].setsmartphone("lenovo", 80);
    cout<< endl;


    cout<< "discount on laptop"<<endl;
    for(int i=0;i<3;i++){
        l[i].Discount();}

    cout<< endl;

    cout << "discount on smartphone"<<endl;

    for(int i=0;i<3;i++){
        p[i].calculateDiscount();
    };
cout<< endl;

    Lion i;
    i.lion();
    cout << endl;
    Fish f;
    f.fish();
};


