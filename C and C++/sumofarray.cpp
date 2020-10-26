#include <iostream>
using namespace std;

int main()
{
    int k;   //declared and initalized an array with max size of elements 100
    int i, n, sum=0; // n is the array size to be entered by the user

    
    cout<<"Enter array size: ";   
    cin>>n;    //entering the value of n

   
    cout<<"Enter elements in the array: ";
    for(i=0; i<n; i++)    // for loop for entering the n elements in the array
    {
       cin>>k;
        sum+=k;
    }
    cout<<"Sum of all elements of array = "<<sum;  //printing the sum

    return 0;
}
