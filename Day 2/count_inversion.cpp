#include<bits/stdc++.h>
using namespace std;

int main(){
    
}


     long long int  merge(long long *arr, long long l, long long  m, long long  r)
    {
         // Your code here
          long long  *temp = new long long [r-l+1];
          long long int cnt =0;
         
         long long  left = l;
         long long  right = m+1;
         long long  i=0;
         while(left<=m && right <=r){
             if(arr[left]<arr[right]){
                 temp[i++]=arr[left++];
             }
             else{
                 temp[i++]=arr[right++];
                 cnt+=(m-left+1);
             }
         }
         while(left<=m){
              temp[i++]=arr[left++];
         }
         while(right<=r){
              temp[i++]=arr[right++];
         }
         
         for(int i =l;i<=r;i++){
             arr[i]=temp[i-l];
         }
         
         delete []temp;
         return cnt;
    }

long long int   mergeSort(long long  arr[], long long  l, long long r)
    {
        //code here
        long long  m = (l+r)/2;
        long long int cnt =0;
        if(l>=r){
            return 0;
        }
        
        cnt+=mergeSort(arr,l,m);
        cnt+=mergeSort(arr,m+1,r );
        
        cnt+=merge(arr,l,m,r);
        return cnt;
    }

long long getInversions(long long *arr, int n){
    // Write your code here.
    return mergeSort(arr,0,n-1);
}