	
    vector<int> merge(vector<int>& arr1, vector<int>& arr2, int m, int n){
    for(int i=0; i<n ; i++){
		arr1.pop_back();
	}

	//push element of arr2 in arr1. 
	for(int i=0; i<n ; i++){
		arr1.push_back(arr2[i]);
	}

	//sort arr1
	sort(arr1.begin(), arr1.end());

	return arr1;

}