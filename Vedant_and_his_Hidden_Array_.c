#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a;
        cin>>n>>a;
        if(a%2==0){
            if(n==1){
                cout<<"Even"<<endl;
            }
            else{
                cout<<"Impossible"<<endl;
            }
        }
        else{
            if(n%2==0){
                cout<<"Even"<<endl;
            }
            else{
                cout<<"Odd"<<endl;
            }
        }
    }
}