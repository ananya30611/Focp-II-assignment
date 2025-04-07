//Ask the user  to input the two number and a mathematical operator (+,-,*,/)and display the result the result operation Eg 3 4 * output12(hint use switch case)
#include<iostream>
using namespace std;//namespace is like a library 
int main (){
    int num1;
    int num2;
    int result;
    char operator_;
    //prompt the user to enter the first value
    cout<<"enter the value of first number:";
    cin>>num1;
    cout<<endl<<num1;
    //prompt the user to enter the second value
    cout<<"enter the value of second number :";
    cin>>num2;
    //prompt the user to enter the mathematical operators
    cout<<"enter the operator(+ , - , * , /)";
    cin>>operator_;
    //perform the operator using a switch case 
    switch(operator_){
        case '+':
        result = num1 + num2;
        cout<<endl<<"the sum of "<<num1<<"+"<<num2<<"is"<<result<<endl;
        break;
        case '-':
        result = num1 - num2;
        cout<<endl<<"the sum of" <<num1<<"-"<<num2<<"is"<<result<<endl;
        break;
        case '*':
        result = num1*num2;
        cout<<endl<<"the sum of"<<num1<<"*"<<num2<<"is"<<result<<endl;
        break;  
        case '/':
        if(num2!=0){
        result = num1/num2;
        cout<<endl<<"the sum of "<<num1<<"/"<<num2<<"is"<<result<<endl;
        }
        else{
            cout<<"Error :division by zero is not allowed "<<endl;
        }
        break;

        default :
        cout<<"Error:Invalid operator .Please use +,-,* or/ . "<<endl;

    }

  return 0 ;
    

    

}