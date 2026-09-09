class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1){
            return 1;
        }
          long long  int s =1;
          long long int e = n;
           long long int ans = 0;
           while(s<e){
           long long  int mid = s +(e-s)/2;
            long long int m = (mid*(mid+1)/2);
            if(m<=n){
                ans = mid;
              s = mid+1 ;
            }
            else{
                e = mid ;
            }
           }
           return ans ;
    }
};