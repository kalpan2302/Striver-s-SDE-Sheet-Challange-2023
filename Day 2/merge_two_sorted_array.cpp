#include<bits/stdc++.h>
using namespace std;


vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i =0;
	int j=0;
	vector<int> ans;
	while(i<m && j<n){
		if(arr1[i]<arr2[j]){
			ans.push_back(arr1[i++]);
		}
		else{
			ans.push_back(arr2[j++]);
		}
	}
	while(i<m){
		ans.push_back(arr1[i++]);
	}
	while(j<n){
		ans.push_back(arr2[j++]);
	}
	return ans;
}

int main(){
    
}