#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//majority element in an array


// we have to check it I will add constraint later
int majority_by_Moore(vector<int> nums){

    int el = 0, cnt = 0;
    for(int i =0;i<nums.size();i++){
        if(cnt == 0){
            cnt = 1;
            el = nums[i];
        }
        else if(nums[i] == el){
            cnt++;
        }else{
            cnt--;
        }
    }
    return el;
}

int majority_by_hash(vector<int> nums){
    unordered_map<int,int> mp;
    for(int i = 0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    int maix = INT_MIN, maxiel = 0;
    for(auto cur : mp){
        if(cur.second > maxi){
            maxi = cur.second;
            maxiel = cur.first;
        }
    }
    return maxiel;
}

int majority_by_brute(vector<int> nums){
    int maxfreq = INT_MIN;
    int maxi = 0;
    for(int i =0;i<nums.size();i++){
        int cnt;
        for(int j = i+1;j<nums.size();j++){
            if(nums[i] == nums[j]){
                cnt++;
            }
        }
        if(maxi < cur){
            maxfreq = arr[i];
            maxi = cur;
        }
    }
    return maxfreq;
}