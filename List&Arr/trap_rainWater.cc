  
  
   int trap(vector<int>& height) {

        /*
        int n = v.size(),i;
        vector<int> l(n,-1),r(n,-1),s;
        for(i = 0; i < n; i++){
            while(!s.empty()&&s.back()<=v[i]){
                s.pop_back();
            }
            if(!s.empty()){
                l[i] = s.back();
                if(v[i]>s.back())
                s.push_back(v[i]);
            }else{
                s.push_back(v[i]);
            }
        }
        s.clear();
        for(i = n-1; i >= 0; i--){
            while(!s.empty()&&s.back()<=v[i]){
                s.pop_back();
            }
            if(!s.empty()){
                r[i] = s.back();
                if(v[i]>s.back())
                s.push_back(v[i]);
            }else{
                s.push_back(v[i]);
            }
        }
        int ans = 0;
        for(i = 0; i < n; i++){
            if(l[i] != -1 && r[i] != -1){
                ans += min(l[i],r[i])-v[i];
            }
        }
        return ans;
        */

        int n = height.size();
  int left = 0, right = n - 1;
  int res = 0;
  int maxLeft = 0, maxRight = 0;
  while (left <= right) {
    if (height[left] <= height[right]) {
      if (height[left] >= maxLeft) {
        maxLeft = height[left];
      } else {
        res += maxLeft - height[left];
      }
      left++;
    } else {
      if (height[right] >= maxRight) {
        maxRight = height[right];
      } else {
        res += maxRight - height[right];
      }
      right--;
    }
  }
  return res;

    }