class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int l = 0;
        int prefixSum = 0;

        unordered_map<int, int> mp;

        mp[0] = 1;

        for (int i = 0; i < nums.size(); i++) {

            prefixSum += nums[i];

            int t = prefixSum - k;

            if (mp.find(t) != mp.end()) {
                l +=mp[t];
            }

            mp[prefixSum]++;
        }

        return l;
    }
};