//Develop a program that takes two integers as input and determines if the first is a multiple of the second using relational and logical operators.  how to run this code in C++ programme
#include<iostream>
using  namespace std;// namespace is like a library 
int main (){
    int num1 , num2;
    //Taking input from the user
    cout<<"enter the value of the first number:";
    cin>>num1;
    cout<<"Enter the value of the second number:";
    cin>>num2;
    //checking if num1 if multiple of num2
    if(num2!=0 && num1%num2 == 0)
    {
        cout<<num1<<"is multiple of"<<num2<<endl;
    }
        else
        {
            cout<<num1<<"is not multiple of"<<num2<<endl;
        }
    return 0 ;
}
