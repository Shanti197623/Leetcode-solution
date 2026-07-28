class Solution {
    int bin(vector<int>& nums,int low,int high,int tar){
        int mid=low+(high-low)/2;
        if (tar==nums[mid]){
            return mid;
        }
        if (high<=low){
            return -1;
        }
        else if (tar<nums[mid]){
            return bin(nums,low,mid-1,tar);
        }
        else return bin(nums,mid+1,high,tar);
    }
public:
    int search(vector<int>& nums, int target) {
        return bin(nums,0,nums.size()-1,target);


        
    }
};