#include <bits/stdc++.h> 
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini = prices[0];
    int ans = 0;
    for(int i =1;i<prices.size();i++){
        int cost  = prices[i] - mini;
        ans = max(ans,cost);
        mini =min(mini,prices[i]);
    }
    return ans;
}