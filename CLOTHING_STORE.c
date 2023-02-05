#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int c=0;
	cin>>n;
	int arr[n];
	for(int j=0;j<n;j++){
		cin>>arr[j];
	} 
	sort(arr,arr+n);
	for(int i=0;i<n;){
		if(arr[i]==arr[i+1]){
			c++;
			i+=2;
		}
		else{
			i++;
		}
	}
	cout<<c;
}