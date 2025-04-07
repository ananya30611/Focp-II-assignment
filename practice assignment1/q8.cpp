//Write a program that take user full name and age as input and display a greeting with the name and the number of the days they have lived
#include<iostream>
#include<string>// required to use the string for  full name 
using namespace std;//namespace is like a library
int main (){
  string Fullname;
  int age , dayslived;
  // Taking full name input
  cout<<"enter your full name :";
  getline(cin,Fullname);
  //taking age as input 
  cout<<"enter your age:";
  cin>>age;
  //Calcultation of days lived(approximately lived and ignoring leap year)
  dayslived = age*365;
  //displaying the output
  cout<<"\n Hello"<<Fullname<< endl;
  cout<<"you have lived approximately"<<dayslived<<"days"<<endl;
  return 0 ;
}

