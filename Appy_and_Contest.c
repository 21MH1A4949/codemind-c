#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,k,x,y,z;
        cin>>n>>a>>b>>k;
        x=n/a;
        y=n/b;
        z=n/lcm(a,b);
        if(x+y-2*z>=k)
        cout<<"Win
";
        else
        cout<<"Lose
";
    
        
    }
}