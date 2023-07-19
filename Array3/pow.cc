
// for posistive value of power 
    // In case of even number the power will be x *x  and n/2
    // in case of even number the power will be ans = ans *x and n = n-1

    double mypow(double x, int n){
        double ans =1.0;
        long nn = n;
        if(nn < 0) nn = -1 *nn;
        while(nn >0){
            if(nn %2 ==1){
                ans = ans * x;
                nn = nn - 1;
            }
            else{
                x = x * x;
                nn = nn / 2;
            }
        }
        if(n<0) ans = (double) (1.0) / (double)(ans);
        return ans;
    }