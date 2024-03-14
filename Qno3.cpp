// Program to find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main (){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];   
    cout<<"Enter the "<<size<<" element of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=1;i<size;i++)
        if (arr[i]<min) min=arr[i];
    
    cout<<"Min value out of all elements is : "<<min<<endl;
   
     return 0;
}
