//Write a program to calculate the area and the perimeter of rectangle using user provided length and width. Use constant what is necessary
#include<iostream>
using namespace std; // namespace is like a library function
int main (){
    //declare the variable length and the width 
    double length , width ;
    // prompt the user for input value 
    cout<<"enter the length of the rectangle";
    cin>>length;
    cout<<"enter the width of the rectangle";
    cin>>width;
    //constant for calculation
    const int Multiplier = 2;
   //calculate the area and perimeter
   double area = length*width;
   double perimeter  = Multiplier *(length + width);
   //display the result 
   cout<<"Area of the rectangle is "<<area<<endl;
   cout<<"perimeter of the rectangle is"<<perimeter<<endl;
   return 0 ;

}