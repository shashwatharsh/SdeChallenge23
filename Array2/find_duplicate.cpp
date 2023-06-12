// Find the duplicate in an array of N+1 integers

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
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