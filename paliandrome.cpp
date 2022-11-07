#include<iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string arr;
    cout<<"Enter  string";
    getline(cin, arr);
    for(int i=0;i<(arr.length())/2;i++){
    if(arr[i]!=arr[arr.length()-i-1])
    {
    cout<<"Not Palindrome";
    exit(0);
    }
    }
    cout<<"String is Palindrome";
}