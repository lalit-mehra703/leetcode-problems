class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if( x == 0) return 0.0;
        if(x == 1) return 1.0 ; 
        if( x == -1 && n % 2 == 0)return 1.0;
        if( x == -1 && n % 2 != 0) return -1.0; 

        long long N = n;
        if(N < 0){
            x = 1/x;
            N = -N;
        }
        double ans = 1;
        while(N > 0){
            int lastBit = N & 1;
            if(lastBit){
                ans = ans * x ;
            }
            x = x * x;
            N = N >>1;
        }
       return ans;
    }
};