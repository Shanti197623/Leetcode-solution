class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            unordered_map<int,int>m;

            for(int j=i+1;j<nums.size();j++){
                int need= -(nums[i]+nums[j]);
                if(m.find(need)!=m.end()){
                    ans.push_back({nums[i],nums[j],need});
                    while (j + 1 < nums.size() &&
                           nums[j] == nums[j + 1]) {
                        j++;
                    }
                }
                m[nums[j]]=j;
            }
            
        }
        return ans;
    }
};