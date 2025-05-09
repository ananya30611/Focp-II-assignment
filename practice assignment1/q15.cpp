//Write a program to evaluate (a^b + c&d) where a, b, c, and d are user inputs. Explain the precedence of bitwise operators in the program.
#include<iostream>
using namespace std ;
int main (){
    int a , b ,c , d;
    //taking input from the user
    cout<<"enter the value of a , b , c and d ";
    cin>> a>>b>>c>>d;
    //evaluating the expression (a^b+c&d)
    int result = (a^b) + (c & d);
    //displaying the result 
    cout<<"result of (a^b + c&d) is :"<<result<<endl;
    return 0 ;
}