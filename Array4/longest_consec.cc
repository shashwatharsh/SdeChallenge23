//Longest consecutive Sequence 

int longestConsecutiveSequence(vector<int> nums){
    if(nums.size() == 0){
        return 0;
    }

    sort(nums.begin(),nums.end());
    
    int ans = 1;
    int prev = nums[0];
    int curr = 1;       // cur is a pointer which count the concurrency of prev 

    for(int i = 1;i<nums.size();i++){
        if(nums[i] == prev+1){
            curr++;
        }
        else if(nums[i] != prev){
            curr = 1;
        }
        prev = nums[i];
        ans = max(ans, cur);
    }
    return ans;
}