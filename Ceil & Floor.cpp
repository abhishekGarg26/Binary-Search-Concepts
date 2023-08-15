#include<bits/stdc++.h>
using namespace std;

int ceil(int arr[], int n, int x) {
	int ans=-1;
	int low=0, high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
        // may be an answer
		if(arr[mid]>=x){
			ans=mid;
            // look for more smaller index on left
			high=mid-1;
		}else{
			low=mid+1; // look for right
		}
	}
	return ans==-1 ? ans : arr[ans];
}
int floor(int arr[], int n, int x) {
	int ans=-1;
	int low=0, high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
        // may be an answer
		if(arr[mid]<=x){
			ans=mid;
            // look for more larger index on right
			low=mid+1;
		}else{
			high=mid-1; // look for left
		}
	}
	return ans==-1 ? ans : arr[ans];
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
	sort(arr,arr+n);
	return {floor(arr,n,x),ceil(arr,n,x)};
}
