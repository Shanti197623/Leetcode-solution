class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int>mp;
      int n = s.size();
      int low =0;
      int high =0;
      int len =0;
      int res =0;
      while(high<n){
        mp[s[high]]++;
        while(mp[s[high]]>1){
            mp[s[low]]--;
            if(mp[s[low]]==0){
                mp.erase(s[low]);
            }
            low++;
        }
        
        len = high -low+1;
        res= max(res,len);
        high++;

      }
      return res;  

        
    }
};