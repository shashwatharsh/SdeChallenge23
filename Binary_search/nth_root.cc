int funct2(int mid , int n, int m){
  long long ans = 1;
  for(int i =1;i<= n;i++){
    ans = ans * mid;
    if(ans > m){
      return 2;
    }
  }
  if( ans == m) return 0;
  return 1;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low = 1,high = m;
  while(low <= high){
    long long mid = (low+high)/2;
    int midan = funct2(mid, n,m);
    if(midan == 0) return mid;
    else if(midan == 1) low = mid +1;
    else high = mid - 1;
  }
  return  -1;
}