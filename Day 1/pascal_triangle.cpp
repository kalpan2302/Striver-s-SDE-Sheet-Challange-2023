#include<bits/stdc++.h>
using namespace std;

int main(){
    
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<long long int> v;
        if (i == 0)
        {
            v.push_back(1);
            ans.push_back(v);
        }
        else if (i == 1)
        {
            v.push_back(1);
            v.push_back(1);
            ans.push_back(v);
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    v.push_back(1);
                }
                else
                {
                    long long int  k = ans[i - 1][j-1] + ans[i - 1][j];
                    v.push_back(k);
                }
            }
            ans.push_back(v);
        }
    }
    return ans;
}
