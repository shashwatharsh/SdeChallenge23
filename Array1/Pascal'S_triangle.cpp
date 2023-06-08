#include<bit/stdc++.h>

using namespace std;

int nCr(int n, int r){
    long long res= 1;
    for(int i =0;i<r;i++){
        res = res *(n-i);
        res = res / (i+1);
    }
    return (int)(res);
}

// Brute approach

vector<vector<int>> PascalTriangle(int n){
    vector<vector<int>> vec;
    for(int row = 1;row <= n;row++){
        vector<int> temp;
        for(int col = 1; col <= row;col++){
            temp.push_back(nCr(row-1,col-1));
        }
        vec.push_back(temp);
    }
    return vec;
}

// Tc = O(n3)

// Optimal Approach 

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}