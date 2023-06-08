#include<iostream>
#include<bits/stdc++.h>

using namespace std;

        // Array and size of array 
vector<int> nextPermutaiton(vector<int> &per, int n ){
    // Better Approach 
    // return next_permutation(permutation,permutation+3);
    // Optimal Approach
    if(n == 1){
        return per;
    }
    int breakPoint = -1;
    for(int i = n-2;i>=0;i--){
        if(per[i] < per[i+1]){
            breakPoint = i;
            break;
        }
    }

    // If break == array is decreasing order then the next permutation is its reverse 
    if(breakPoint == -1){
         reverse(per.begin(),per.end());
         return per;
    }
    for(int i = n-1;i>= breakPoint;i--){
        if(per[i] > per[breakPoint]){
            swap(per[i],per[breakPoint]);
            break;
        }
    }
    reverse(per.begin()+ breakPoint + 1, per.end() );
    return per;
}
