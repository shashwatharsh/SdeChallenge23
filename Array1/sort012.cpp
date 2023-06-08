  /*
        Brute = Sort the arrys
        Better = Count no. of 1 , 0 ,2 insert in that array
        Optimal = Dutch Natinal Flag Algo
        */



    // Dutch Natinal Flag Algo
    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
        int arr[6]= {2,0,1,2,0,1}
        int low =0, mid = 0;
        int high = nums.size()-1;

        while( mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }

    }