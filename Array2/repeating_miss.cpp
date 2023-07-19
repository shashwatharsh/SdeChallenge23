#include <bits/stdc++.h>
using namespace std;

pair<int,int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int repeating = -1, missing = -1;

    //Find the repeating and missing number:
    for (int i = 1; i <= n; i++) {
        //Count the occurrences:
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == i) cnt++;
        }

        if (cnt == 2) repeating = i;
        else if (cnt == 0) missing = i;

        if (repeating != -1 && missing != -1)
            break;
    }
    return {repeating, missing};
}

pair<int,int> rep_miss(vector<int> a){           //Time complexity = O(nlogN)+O(N)
    int n = a.size();
    
    int sum = a[n-1],rep = 0;
    for(int i = 0;i<n-1;i++){
        sum += a[i];
        if(a[i] == a[i+1]){
            rep = a[i];
        }
    }
    return {(n(n+1)/2)+rep-sum,rep}

}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"<< ans[0] << ", " << ans[1] << "}\n";
    return 0;
}