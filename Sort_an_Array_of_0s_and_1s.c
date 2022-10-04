#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    int counto=0,countl=0;
    for(int i=0;i<t;i++){
        if(arr[i]==0) counto++;
        else
        countl++;
    }
    for(int i=0;i<counto;i++) arr[k++]=0;
    for(int i=0;i<countl;i++) arr[k++]=1;
    for(int i=0;i<t;i++) cout<<arr[i]<<" ";
    //cout<<endl;
}
