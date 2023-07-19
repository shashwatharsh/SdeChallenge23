unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n = nums.size();
        for(auto cur : mp){
            if(cur.second > n/3){
                ans.push_back(cur.first);
            }
        }
        return ans;
