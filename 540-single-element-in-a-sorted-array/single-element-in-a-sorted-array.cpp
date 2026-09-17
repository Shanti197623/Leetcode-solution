class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
            int s =0;
            int e = nums.size()-1;
            while(s<e){
                int mid= s+(e-s)/2;
                
                if(mid%2==0){
                    if(nums[mid]!=nums[mid+1]){
                    e=mid;
                    }
                    if(nums[mid]==nums[mid+1]){
                    s = mid+1;
                    }
                }
                if(mid%2!=0){
                    if(nums[mid]==nums[mid+1]){
                    e=mid;
                    }
                    if(nums[mid]!=nums[mid+1]){
                    s = mid+1;
                    }
                }
                
             }
            return nums[s];
    }
};