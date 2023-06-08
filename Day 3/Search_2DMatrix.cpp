#include<bits/stdc++.h>
using namespace std;

int main(){
    
}

bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row= mat.size();
        int col = mat[0].size();

        int l = 0;
        int h = row*col - 1;

        int m = l + (h-l)/2;

        while(l<=h){
            int num = mat[m/col][m%col];
            if(num==target){
                return true;
            }
            if(num>target){
                h=m-1;
            }
            else{
                l = m+1;
            }
            m = l + (h-l)/2;
        }
        return false;
}