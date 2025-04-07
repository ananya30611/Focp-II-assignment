//Taking two floating point number as input and display their division result with the two decimal places 
  #include<iostream>
  #include <iomanip>//for setprecision
  //setprecision means to display the result of any number with 2 decimal point number 
  using namespace std;//namespace is like a library 
  int main (){
      float num1;
      float num2 ;
      //prompt the user to take first number 
    cout<<"enter the first number:";
    cin>>num1;
    //prompt the user to take second number 
    cout<<"enter the second number:";
    cin>>num2;
    //we need to check if the second number is not zero
    if(num2!=0){
      float result = num1/num2;
    
    //display the result with 2 decimal places 
    cout<<"the result of the division is:"<<fixed<<setprecision(2)<<result<<endl;
    }
    else
      {
      cout<<"Error Division by zero is not allowed."<<endl;
    }

    return 0 ;
  }