#include<bits/stdc++.h>
using namespace std;

int main(){
    
}

int modularExponentiation(int x, int n, int m) {

	long long ans = 1;
	while(n!=0){
		if(n%2!=0){
			ans= (ans*x)%m;
			n--;
		}
		x = (1LL*(x%m)*(x%m))%m;
		n/=2;
	}
	return ans%m;



	// // Write your code here.
	// if(n==0){
	// 	return 1;
	// }
	// if(n==1){
	// 	return x%m;
	// }
	// long long int ans = 0;
	// if(n%2==0){
	// 	ans += (1LL*(modularExponentiation(x,n/2,m)%m)*(modularExponentiation(x,n/2,m)%m))%m;
	// 	ans=ans%m;
	// }
	// else{
	// 	ans += (1LL*(x%m)*((modularExponentiation(x,n/2,m)%m)*(modularExponentiation(x,n/2,m)%m))%m)%m;
	// 	ans=ans%m;
	// }
	// return ans%m;
}