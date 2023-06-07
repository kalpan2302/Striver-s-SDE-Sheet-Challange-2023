#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	set<int> row;
        set<int> col;

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(int i =0;i<m;i++){
            if(row.count(i)){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j =0;j<n;j++){
            if(col.count(j)){
                for(int i =0;i<m;i++){
                    matrix[i][j]=0;
                }
            }
        }
}

int main(){
    
}