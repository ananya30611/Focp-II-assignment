//Write a programme to take two integers as input and display their sum 
#include<iostream>
using namespace std;//namespace is like a library
int main (){
    int firstinteger,secondinteger,sum ;
    //  prompt the user to enter the  value of  fist integer 
    cout <<"enter the  value of  firstinteger:";
    cin>>firstinteger;
    // prompt the user to enter the value of  second integer
    cout <<"enter the value of second integer :";
    cin>>secondinteger;
    // to calculate the sum of the two integers
    sum = firstinteger + secondinteger;
    cout <<endl<<"the sum of"<<firstinteger<<"and"<<secondinteger<<"is"<<sum<<endl;
return 0 ;
}