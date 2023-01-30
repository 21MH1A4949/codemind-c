#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        
	long long int n;
	cin>>n;
	long long int arr[n],sum=0;
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
		//cout<<arr[i];
		sum+=arr[i];
	}
	long long int k=(n*(n+1)/2);
	cout<<k-sum<<endl;
}
}