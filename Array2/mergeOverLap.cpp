#include<iostream>

using namespace std;

vector<vector<int>> MergeOVerlap1(vector<vector<int>> arr){
    sort(arr.begin(),arr.end());
    int n = arr.size;
    vector<vector<int>> ans;
    for(int i =0;i<n;i++){

        int start = arr[i][0];
        int end = arr[i][1];
        if(ans.size() && end <= ans[ans.size() -1][1]){
            continue;
        }

        for(int j =0;j<n;j++){
            if(arr[j][0]<=end){
                end = max(end,arr[j][1]);
            }else{
                break;
            }
        }
        ans.push_back([start,end]);
    }
    return ans;
}


// Optimized code 
vector<vector<int>> MergeOVerlap2(vector<vector<int>> arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i =0;i<n;i++){

        // check if ans is empty 
        // or if arr's first index is greater than before last element
        if(ans.empty() || arr[i][0]> ans.back[1]){
            ans.push_back(arr[i]);
        }

        // if arr lies in the interval 
        // check the max last inteval and add;
        else{
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main(){

}