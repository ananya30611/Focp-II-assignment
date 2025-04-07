//Create a program that takes three inputs: a character, an integer, and a floating-point number.Display them in a formatted table.
#include<iostream>
#include<iomanip>
using namespace std;// using namespace is like a library
int main (){
    char c;
    int num;
    float decimal ;
    cout<<"enter the character";
    cin>>c;
    cout<<endl<<"enter the value of integer";
    cin>>num;
    cout<<endl<<"enter the value of decimal";
    cin>>decimal;
    cout<<"Character"<<setw(10)<<"Integer"<<setw(10)<<"Floting point\n";
    cout<<c<<setw(10)<<num<<setw(10)<<fixed<<setprecision(2)<<dec;
    return 0;
}
