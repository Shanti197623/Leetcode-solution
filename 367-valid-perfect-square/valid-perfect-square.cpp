class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int low=1;
       long long int high=num;
        while(low<=high){
           long long  int mid=low+(high-low)/2;
           long long int sum=mid*mid;
            if(sum==num){
                return true;
            }
            else if(sum<num){
                low=mid+1;
            }
            else{
                high =mid-1;
            }
        }
return false;
        
    }
};