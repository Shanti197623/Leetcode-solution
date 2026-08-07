class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        vector<int>p;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
            else{
                p.push_back(nums[i]);
            }
        }
        for(int i=0;i<p.size();i++){
            v.push_back(p[i]);

        }
        nums=v;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<"  ";
        }
    }
};