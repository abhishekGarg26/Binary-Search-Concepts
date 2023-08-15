#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int ans=n;
	int low=0, high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
        // may be an answer
		if(arr[mid]>x){
			ans=mid;
            // look for more smaller index on left
			high=mid-1;
		}else{
			low=mid+1; // look for right
		}
	}
	return ans;
		
	
}