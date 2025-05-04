//Write a program that solves a quadratic equation (ax^2 + bx + c = 0) using conditional statements to handle all possible cases (real and distinct roots, real and equal roots, complex roots)
#include<iostream>
#include<cmath>// it is use for pow() and sqrt()
using namespace std;//namespace is like a library
int main (){
    double a ,b ,c ;
    cout<<"enter the coefficient of a , b and c :";
    cin>>a>>b>>c;
    //check if it is a quadratic equation
    if(a==0){
        cout<<"Not the quadratic equation (a cannot be zero)"<<endl;
        return 0 ;
    }
double discrimant = b*b - 4*a*c;
//Case 1:real and distinct root 
if(discrimant>0){
    double root1 =(-b+sqrt(discrimant))/(2*a);
    double root2 = (-b-sqrt(discrimant))/(2*a);
    cout<<"roots are real and distinct :"<<root1<<"and"<<root2<<endl;
}
//Case2:real and equal roots
else{
    double realpart=-b/(2*a);
    double imaginarypart =sqrt(discrimant)/(2*a);
    cout<<"root are the complex :"<<realpart<<"+"<<imaginarypart<<"i and"<<endl;    
    cout<<realpart<<"-"<<imaginarypart<<"i"<<endl;
}
return 0 ;
}