class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int s =1;
       long long int e = num;
        while(s<=e){
           long long int mid = s+(e-s)/2;
           long long  int n = mid*mid;
            if(n==num){
                return true;
            }
            else if(n>num){
                e = mid-1;
            }
            else{
                s = mid +1;
            }
        }
        return false ;
    }
};