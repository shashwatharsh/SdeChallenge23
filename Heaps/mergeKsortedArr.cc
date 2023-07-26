#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here.
    int cnt = 0; 
    priority_queue<int,vector<int>,greater<int>> pq;
    for(auto i : kArrays){
        for(auto j :i){
            pq.push(j);
            cnt++;
        }
    }
    vector<int> ans;
    for(int i = 0;i<cnt;i++){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}