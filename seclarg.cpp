#include<iostream>
using namespace std;

int main(){
    int arr[20],n;
    cout<<"Enter the number of elements";
    cin>>n;
    cout<<"Enter elements to be inserted";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             int temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
    int max=0,second=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second=max;
            max=arr[i];
        }
        else if(max!=second && arr[i]>second)
        {
            second=arr[i];
        }
       
        }

    // for(int i=0;i<n;i++){
    //     if(arr[i]!=max){
    //     if(arr[i]>min){
    //         min=arr[i];
    //     }
    //     }
    // }
    cout<<"Second largest"<<second;
    
}