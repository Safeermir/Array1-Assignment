// Program to find the product of all the elements in the given array.
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
    int product=1;
    for (int j=0;j<size;j++){
        product=product*arr[j];
    }
     cout<<"The product of elements of array is : "<<product;
     return 0;
}