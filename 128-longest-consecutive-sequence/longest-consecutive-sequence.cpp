class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        
        sort(v.begin(),v.end());
        if(v.size()<2) return v.size();
         int freq=1,ans=1;
        for(int i=0;i<v.size();i++){
            
            if( i+1<v.size() && v[i]==v[i+1]-1){
                freq++;
                
            }
            else if(i+1<v.size() && v[i]==v[i+1]){
                continue;
            }
            else{
                freq=1;
            }
            ans=max(ans,freq);
            
            
        }
        return ans ;
        
    }
};