#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
   int ind1 = -1;
   int ind2=-1;
   for(int i=n-2;i>=0;i--){
       if(permutation[i+1]>permutation[i]){
           ind1 = i;
           break;
       }
   }
   if(ind1==-1){
       reverse(permutation.begin(),permutation.end());
   }
   else{
       for(int i=n-1;i>=0;i--){
           if(permutation[i]>permutation[ind1]){
               ind2=i;
               break;
           }
       }
       swap(permutation[ind1],permutation[ind2]);
       reverse(permutation.begin()+ind1+1,permutation.end());
   }

   return permutation;
    
}