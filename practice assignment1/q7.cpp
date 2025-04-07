//Write a program to swap two number using  temporary variable and then without using a temporary variable 
#include<iostream>
using namespace std; // namespace is like a library
int main (){
    int a , b ;
    // Input the value from user 
    cout<<"enter the value of first number:";
    cin>>a;
    cout <<"ennter the value of second number:";
    cin>>b;
    //Swapping the number using temporary variable
    int temp = a;
     a = b;
    b = temp;
    cout <<"After swapping using a temporary variable a = "<<a<<"b ="<<b<<endl;
    //swapping the number without the temporary variable
    a = a + b;
    b = a - b;
    a = a - b ;
    cout<<"After swapping without the temporary variable a = "<<a<<"b = "<<b<<endl;
    return 0 ;
}