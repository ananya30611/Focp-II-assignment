#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main ()
{
  int size ; 
  cout<<"Enter the size of the array";
  cin>>size;
  int arr[size],arr1[size];//size determine at  run time
  cout<<"enter"<<size<<"element:";
  for (int i = 0; i <size; i++)
  {
    cin>>arr[i];
  }
  cout<<"Reversed array :";
  for (int i = size - 1; i>=0; i--)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  if (size<2)
  {
    cout<<"Array size is to small to find the second largest or second smallest element"<<endl;
    return 0 ;
  }
  int largest = arr[0],secondlargest = INT_MIN;
  int smallest = arr[0],secondSmallest = INT_MAX;
   for (int i = 0; i < size; i++) //copying to another array to sort
    {
        arr1[i]=arr[i];
    }
    // Finding unique elements count 
    int uniqueCount = 0;
    for (int i = 1; i < size; ++i) {
        sort(arr1, arr1 + size);
        if (arr1[i] != arr1[i - 1]) {
            uniqueCount++;
        }
    }
    if (uniqueCount < 2) {
        cout << "Not enough unique elements to determine second largest and second smallest." << endl;
    }
    else{
    for (int i = 1; i < size; i++) 
    {
        //SECOND LARGEST
        if (arr[i] > largest) 
        {
            secondlargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondlargest && arr[i] != largest) 
        {
            secondlargest = arr[i];
        }
        //SECOND SMALLEST
        if (arr[i] < smallest) 
        {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest && arr[i] != smallest) 
        {
            secondSmallest = arr[i];
        }
    }   
    //incase ALL THE ELEMENTS ARE SAME
    if (secondlargest == INT_MIN || secondSmallest == INT_MAX)
        cout << "No distinct second largest or second smallest element exists." << endl;
    else 
    {
        cout << "Second largest: " << secondlargest << endl;
        cout << "Second smallest: " << secondSmallest << endl;
    }}
    return 0;
}

  
  
