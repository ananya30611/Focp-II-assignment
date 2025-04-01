//Create the programme that  reads user's name and age ;then outputs: "Hello[name] , you are [age] years old
#include<iostream>
using namespace std; // namespace is like a library
int main (){
    string  name ;
    int age;
    cout<<"enter your name:";
    getline(cin,name);
    cout<<endl<<"enter your age:";
    cin>>age;
    cout<<endl<<"hello"<< name<<"you are"<<age<<"year old";
    return 0 ;
}