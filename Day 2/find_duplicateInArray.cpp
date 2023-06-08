#include<bits/stdc++.h>
using namespace std;

int main(){
    
}

int solve(vector<int> &arr, int m){
	int count =0;
	for(int i =0;i<arr.size();i++){
		if(arr[i]<=m){
			count++;
		}
	}
	return count;
}

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	int l = 0;
	int h = n-1;
	int m = l + (h-l)/2;

	while(l<h){
		if(solve(arr,m)>m){
			h = m;
		}
		else{
			l =m+1;
		}
		m = l + (h-l)/2;
	}

	return l;

	// map<int,int> m;
	// for(int i =0;i<n;i++){
	// 	m[arr[i]]++;
	// 	if(m[arr[i]]>=2){
	// 		return arr[i];
	// 	}
	// }
}
