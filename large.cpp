#include<iostream>
using namespace std;
int main(){
    int n[10];
    int no;
    cin>>no; 
    for(int i=0;i<no;i++){
    cin>>n[i];
    }
    int max=n[0];
    for(int i=0;i<no;i++){
    if(n[0]<n[i]){
    max=n[i];
    continue;
}
    }
    cout<<max;
}