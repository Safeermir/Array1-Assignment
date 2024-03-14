//Progam to find the duplicate element in the array.
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

    for(int i=0;i<size;i++){
      for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            cout<<"The duplicate number is: "<<arr[i]<<endl;
            break;
            flag=true;
        }
      }
    }
    if(flag==false){
        cout<<"There is no dupliate number. "<<endl;
    }
    return 0;
}