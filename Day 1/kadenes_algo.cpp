#include <bits/stdc++.h> 
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    long long  ans =0;
    long long  sum = 0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
        ans = max(ans,sum);
        if(sum<=0){
            sum=0;
        }
    }
    return ans;
}