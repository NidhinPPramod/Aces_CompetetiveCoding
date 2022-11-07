#include<iostream>
using namespace std;
int main(){
    int n[10],sum=0,no;
    cin>>no;
      for(int i=0;i<no;i++){
        cin>>n[i];
    }
    for(int i=0;i<no;i++){
        sum=sum+n[i];
    }
    cout<<sum;
}