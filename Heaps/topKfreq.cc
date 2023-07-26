class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        map<int,int> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        //sort(mp.begin(), mp.end(),[&] (auto a, auto b){
        //    return a.second > a.first;
        //});
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(), vec.end(),[&] (auto a, auto b){
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i=0;i<k;i++)
           ans.push_back(vec[i].first);
        return ans;
    }
};