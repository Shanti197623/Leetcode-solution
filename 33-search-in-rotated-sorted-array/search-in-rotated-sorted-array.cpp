class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums .size();
        int s =0;
        int e = n-1;
        
        
        while(s<e){
            int mid = s+(e-s)/2;
            if(nums[mid]>=nums[0]){
                s = mid+1;
                
            }
            else{
                e = mid;
            }
            
        }
        int pivot = s;
        s = 0;
        e = n - 1;

        if (target >= nums[pivot] && target <= nums[e]) {
            s = pivot;
        } else {
            e = pivot - 1;
        }
        
            while(s<=e){
                int mid = s+(e-s)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(nums[mid]<target){
                    s = mid +1;
                }
                else{
                    e= mid-1;
                }
                
            }
        
         return -1 ;


    }
};