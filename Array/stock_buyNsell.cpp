#include<iostream>
#include<vector>
using namespace std;


int BuyNsell1(int arr[],int n){
    int maxpro = 0;
    for( int i =0;i<n;i++){
        for( int j =i;j<n;j++){
            if(arr[i]<arr[j]){
                maxpro = max( maxpro, arr[j]- arr[i]);
            }
        }
    }
    return maxpro;
}

int BuyNsell2(int arr[], int n){
    int minprice = INT_MAX;
    int maxpro = 0;
    for(int i =0;i<n;i++){
        minprice = min(minprice, arr[i]);
        maxpro = max(maxpro, arr[i]-minprice);
    }

    return maxpro;
}

int main(){
    // BRute approach 
    
}