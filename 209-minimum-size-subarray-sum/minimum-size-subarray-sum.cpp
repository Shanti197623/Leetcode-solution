class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int best=INT_MAX;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                 best =min(best,i-left+1);
                 sum-=nums[left];
            left++;
                }
            
        }
        return best == INT_MAX ? 0 : best;
    }
};