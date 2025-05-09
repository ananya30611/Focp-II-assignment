//Develop a program that checks if a triangle is valid based on the lengths of its sides and determines its type (equilateral, isosceles, or scalene) using nested if-else statements
#include<iostream>
using namespace std;
int main (){
    double a , b ,c ;
    //input the three side of the triangle
    cout<<"enter the three side of the triangle";
    cin>>a>>b>>c;
    //check if the given side of the form of the triangle
    if((a+b>c) && (a + c > b) && (b + c > a)){
        cout<<"the triangle  is valid\n";
    
    //determine the type of the triangle using nested if-else
    if (a==b && b==c)
    {
        cout<<"It is an equilaterial triangle\n";
    }
    else{
        if (a == b || b == c|| a == c)
        {
            /* code */
        
        
        cout<<"It is a scalene triangle\n";
    }
    }

    
}else{
    cout<<"The given side DO NOT form  a valid triangle\n";
}
}
