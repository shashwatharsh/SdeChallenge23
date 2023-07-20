// Largest subarray with 0 sum

// Given an array whose subaarya length is maxiumimin the subarray sum is 0.

 int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        int maxLen = 0;
    unordered_map<int, int> sumIndexMap;
    int sum = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        if (sum == 0) {
            maxLen = i + 1;
        } else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            maxLen = max(maxLen, i - sumIndexMap[sum]);
        } else {
            sumIndexMap[sum] = i;
        }
    }
    return maxLen;

    }