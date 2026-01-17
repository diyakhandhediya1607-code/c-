#include <iostream>
using namespace std;

class Trainclass
{
private:
    int trainnumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char traintime[10];

public:
    void menu() {
        cout << "\n--- Railway Reservation System Menu ---\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display Train Record\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";
    }

    void class1(){
        cout << "Enter trainnumber : ";
        cin >> trainnumber;

        cout << "Enter trainName : ";
        cin >> trainName;

        cout << "Enter source : ";
        cin >> source;

        cout << "Enter destination : ";
        cin >> destination;

        cout << "Enter traintime : ";
        cin >> traintime;
    }

    void class2(){
        cout << "\nTrain number : " << trainnumber << endl;
        cout << "Train Name : " << trainName << endl;
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
        cout << "Train time : " << traintime << endl;
    }

    void class3(){
        int a;
        cout << "Enter Train Number to search : ";
        cin >> a;

        if (a == trainnumber)
            cout << "Train Found\n";
        else
            cout << "Train Not Found\n";
    }

    void class4(){
        cout << "Exiting the system. Goodbye!" << endl;
    }
};

int main(){
    Trainclass s;
    int choice;

    do {
        s.menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: s.class1(); break;
            case 2: s.class2(); break;
            case 3: s.class3(); break;
            case 4: s.class4(); break;
            default: cout << "Invalid choice\n";
        }
    } while(choice != 4);

    return 0;
}
