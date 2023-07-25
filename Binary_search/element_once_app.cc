  int singleNonDuplicate(vector<int>& nums) {

/*
        // Tc = O(n)
        int l = 0;
        int r = l+1;
        if(nums.size() <= 1) return nums[l];
        while(l < r) {
            if(nums[l] == nums[r]) {
                l+=2;
                r+=2;
            }
            else break;
        }
        return nums[l];

    */

    if(nums.size()==1) return nums[0];
    int n = nums.size();
    if(nums[0] != nums[1]) return nums[0];
    if( nums[n-1] != nums[n-2]) return nums[n-1];

    int low = 1, high = n-2;
    while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid] != nums[mid -1] && nums[mid] != nums[mid +1]) return nums[mid];
        if((mid %2 == 1 && nums[mid -1 ] == nums[mid])|| (mid % 2 ==0 && nums[mid] == nums[mid +1]))
            low = mid +1;
        else high = mid -1;
    }
    return -1;
    }