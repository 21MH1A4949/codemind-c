#include<bits/stdc++.h>
using namespace std;
int majority(int arr[],int n){
	int i,candidate=-1,vote=0;
	for(i=0;i<n;i++){
		if(vote==0){
			candidate=arr[i];
			vote=1;
		}
		else{
			if(arr[i]==candidate)
				vote++;
			else
				vote--;
		}
	}
	int count=0;
	for(i=0;i<n;i++){
		if(arr[i]==candidate)
			count++;
	}
	if(count>n/2)
		return candidate;
	return -1;
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<majority(arr,n)<<endl;
return 0;
}