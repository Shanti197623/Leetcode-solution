class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>sp;
        vector<int>v;
        
        for(int i=0;i<nums1.size();i++){
            sp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(sp.find(nums2[i])!=sp.end()){
                v.push_back(nums2[i]);
                sp.erase(nums2[i]);
            }
        }
        return v;
    }
};