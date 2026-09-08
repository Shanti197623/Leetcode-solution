class Solution {
public:
    int mySqrt(int x) {
    if (x==1){
        return 1;
    }
        
        long long int s = 0;
        long long int e = x;
        long long int ans = 0;
        while(s<e){
            long long int mid = s+(e-s)/2;
            long long int n = mid*mid;
             
            if(n<=x){
                ans = mid;
                s = mid+1;
            }
            
            else{
                e = mid ;
            }
        }
        return ans  ;
    }
};