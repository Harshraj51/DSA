class Solution {
public:
    long long sumAndMultiply(int n) {
        long long res = 0, sum = 0 , rev = 0;
        while(n){
            int rem=n%10;
            if(rem>0){
                rev = rev*10+rem;
            }
            sum=sum+rem;
            n=n/10;
        }
        while(rev){
            int n = rev%10;
            res = res*10+n;
            rev=rev/10;
        }
        return res * sum;
    }
};
