class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    
          long long sum=0,best =INT_MIN;
          int left=0;
          for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i-left+1>k){
                sum-=nums[left];
                left++;
            }
            if(i-left+1==k){
                best = max(best,sum);
            }
          }
          return (double)best/k;
    }
};