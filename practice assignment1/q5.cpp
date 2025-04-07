//Write a programme that calculate the coumpound interest to a given principal amount , rate of interest and time period using constant and user input variables.
#include<iostream>
#include<cmath>//for power function
#include<iomanip>//it is use  for setprecision()
using namespace std;//namesace is like a library 
int main (){
    float principal, time , rate, amount ,coumpoundinterest;
    int n = 4;// it is a constant number of times  interest in compound per year (quarterly)
    cout<<"enter the value of principal amount :";
    cin>>principal;
    cout<<"enter the rate of interest :";
    cin>>rate;
    cout<<"enter the time period:";
    cin>>time;
    //Convert the rate of interest 
    rate = rate/100;
    //Compound interest formula calculation 
    amount = principal*pow((1+rate/n),(n*time));
    coumpoundinterest = amount - principal;
    //display the result with 2 decimal places 
    cout<<fixed<<setprecision(2);
    cout<<"the fixed amount is"<<time<<" of the year is:"<<amount<<endl;
    cout<<"coumpoundinterest earned is"<<coumpoundinterest<<endl;  
    return 0 ;
}