#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double p,r,t;
    cin>>p>>r>>t;
    //cout<<p<<r<<t;
 
    double A = p * (pow((1 + r / 100), t));
 
    cout <<fixed<<setprecision(2)<<A;
 
    return 0;
}