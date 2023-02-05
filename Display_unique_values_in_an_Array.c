#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]||arr[i]==arr[i-1]){
            // flag=1;
            continue;
            //cout<<arr[i]<<" ";
        }
        else{
            cout<<arr[i]<<" ";
            c++;
        }
            
    }
        if(c==0){
            cout<<-1;
        }
    }

