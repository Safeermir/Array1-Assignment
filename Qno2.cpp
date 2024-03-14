// Program to find the second max element is arry in one pass.
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
    int max=arr[0];
    int smax=arr[0];
    for(int i=1;i<size;i++){
        if (arr[i]>max){ 
            smax=max;
            max=arr[i];
            }
        else if(arr[i]!=max && arr[i]>smax) smax=arr[i];
    }
    cout<<"Max Element is : "<<max<<endl;
    cout<<"Second Max Element is: "<<smax;
     return 0;
}