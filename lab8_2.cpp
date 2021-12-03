#include <iostream>
using namespace std;
//Dialog of the first example is given below./*
int main() {
    string name,movie,date,dialog;
    int num,year,gear;
    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n" <<
    "?????: " ;
    

    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name."<< "\n";
    

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?"<< "\n";
    cout << name << ": ";
    cin >> num; 

    year = num/10e6;
    gear = year-12;

    cout << "Fahsai: I think you may be GEAR "<< gear <<"."<< "I have a free movie ticket for you."<< "\n";
    cout << "Fahsai: Let's go to the cinema together!!!"<< "\n";
    cout << "Fahsai: What movie do you want to watch?"<< "\n";

    cout << name << ": ";
    cin.ignore();
    getline(cin,movie);

    cout << "Fahsai: So....which day are you free to go with me?"<< "\n";
    cout << name << ": ";
    getline(cin,date);

    cout << "Fahsai: "<< date <<"....that is OK!!! I'm looking forward to watching " << movie << " with you."<< "\n";
    cout << name << ": ";
    getline(cin,dialog);

    cout << "Fahsai: 555+ see you "<< date << ". Bye Bye \\(^ ^)/";


}