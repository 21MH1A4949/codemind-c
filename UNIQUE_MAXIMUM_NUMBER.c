#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    int c=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]||arr[i]==arr[i-1]){
            continue;
        }
        else{
            v.push_back(arr[i]);
            c++;
        }
    }
    sort(v.begin(),v.end());
    int k=v.size();
    if(c==0){
        cout<<-1;
    }
    else{
        cout<<v[k-1];
    }
    
}