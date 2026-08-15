class Solution {
public:
    bool isPalindrome(int x) {
        long long sum=0;
       long long  n=x;
       long long  rem;
       if(x<0){
        return false;
       }
        while(x!=0){
             rem=x%10;
            sum=sum*10+rem;
             x/=10;
        }
        if(sum==n){
            return true;
        }
        return false;
    }
};