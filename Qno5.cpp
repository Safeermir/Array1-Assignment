/*Program to find the smallest missing positive element in the sorted Array that contains only
positive elements.*/
#include<iostream>
using namespace std;
int main(){
    int size;
    bool flag=false;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];   
    cout<<"Enter the "<<size<<" element of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sm_num=1;
    for(int i=0;i<size;i++){
        if (arr[i]==sm_num){
            sm_num++;
        }
        else if(arr[i]>sm_num){
            break;
        }
    }
    cout<<"Smallest Missing number is : "<<sm_num<<endl;
    return 0;
}