class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int best=0;
      int left=0,l=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            l++;
        }
        while(k<l){
            if(nums[left]==0){
                l--;
            }
            left++;
        }
        best=max(best,i-left+1);

      }  
      return best;
    }
};