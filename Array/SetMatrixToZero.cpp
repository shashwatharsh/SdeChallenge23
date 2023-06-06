#include<iostream>

#include<bits/stdc++.h>
// bits/stdc++. h

using namespace std;
void MarkRow(vector<vector<int>> &mat,int r){
    for(int j =0; j< mat[0].size(); j++){
        if(mat[r][j] != 0){
            mat[r][j] =-1;
        }
    }
}

void MarkCol(vector<vector<int>> &mat,int c){
    for(int j =0; j< mat.size(); j++){
        if(mat[j][c] != 0){
            mat[j][c] =-1;
        }
    }
}

void SetMatrixToZero(vector<vector<int>> &mat, int n){
    for(int i =0;i<n;i++){
        for(int j = 0;j<mat.size();j++){
            if(mat[i][j] == 0){
                // cout<<i<<j<<endl;
                MarkRow(mat,i);
                MarkCol(mat,j);
            }
        }
    }
    
    for(int i =0;i<n;i++){
        for(int j = 0;j<mat.size();j++){
            if(mat[i][j] == -1){
                mat[i][j] = 0;
            }
        }
    }
}

void TraverseMatrix(vector<vector<int>> mat){
    for(int i =0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
                cout<<mat[i][j]<<", ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> mat = {{1,4},{1,0}};
    int n = mat.size();

    /* 
    // Brute Code
    TraverseMatrix(mat);
    SetMatrixToZero(mat,2);

    cout<<"After Function"<<endl;
    TraverseMatrix(mat);
    */

    /*
    // Better code
int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row (n,0);
        vector<int> col (m,0);
    
    for(int i =0; i<matrix.size();i++){
        for(int j =0; j < matrix[0].size(); j++){
            if(matrix[i][j] ==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(int i =0; i<matrix.size();i++){
        for(int j =0; j < matrix[0].size(); j++){
            if(row[i] || col[j]){
                matrix[i][j] = 0;
            }
        }
    }
    */


    // Optimal Code
    

    return 0;
}