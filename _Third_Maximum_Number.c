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
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            for(int j=i+1;j<n;j++){
                arr[j]=arr[j+1];
                n--;
            }
        }
    }
    if(n>=3)
    cout<<arr[n-3];
    else{
        cout<<arr[n-1];
    }
 }