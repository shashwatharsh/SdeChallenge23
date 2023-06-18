#include <iostream>
#include <bits/stdc++.h>

bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       /*
    //    linear Search
        for(int i =0;i<matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++ ){
                if(matrix[i][j] == target){
                    return 1;
                }
            }
        }
        return false;
        */

        // Binary Search
        int m = matrix.size(), n = matrix[0].size();
        int low = 0, high = m*n - 1;
        while( low <= high){
            int mid = low +(high -low)/2;
            if(matrix[mid/m][mid%m] == target) return true;
            else if( matrix[mid/m][mid%m] < target ) low = mid +1;
            else high = mid -1;
        }
        return false;
}

int main(){

}