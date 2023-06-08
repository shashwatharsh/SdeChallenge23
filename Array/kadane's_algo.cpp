// Maximum Subarray Sum in an Array

// Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.

#include<iostream>

using namespace std;

int max_sub_arr(vector<int> &arr, int n){
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        int sum =0;
        for(int j =i;j<n;j++){
            sum+= arr[j];
            maxi = max(maxi, sum);
        }
    }   
    return maxi;
}

    // OPtimized
int maxiSum(int arr[], int n){
    long long maxi = LLONG_MIN;
        long long sum =0;
    for(int i =0;i<n;i++){

        sum += arr[i];

      if (sum > maxi) {
        maxi = sum;
      }

      if (sum < 0) {
        sum = 0;
      }
    }
    // cout<<maxi;
    if (maxi < 0) {
      return (long long)0;
    }
    return maxi;
}

int main(){
    int arr[] = [-2,1,-3,4,-1,2,1,-5,4];
    
    // brute 
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // subarray = arr[i.....j]
            int sum = 0;

            //add all the elements of subarray:
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            maxi = max(maxi, sum);
        }
    }
    cout<<"the max sub array is "<<maxi;
    return 0;
}


// https://takeuforward.org/data-structure/kadanes-algorithm-maximum-subarray-sum-in-an-array/