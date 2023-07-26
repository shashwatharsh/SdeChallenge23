 int findKthLargest(vector<int>& nums, int k) {
       
       /* 
            Using max heap
        priority_queue<int> pq;
        for(auto i : nums){
            pq.push(i);
        }

        int ans = 0;
        while(k--){
            ans = pq.top();
            pq.pop();

        }
        return ans;
        */


        /*
        sort(nums.begin(),nums.end(), [&] (int a, int b){
            return a > b;
        });
        return nums[k-1];

        */

        
    }