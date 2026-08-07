class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int m[256]={0};
       int  p[256]={0};
    
        for(int i=0;i<s.size();i++){
            if(m[s[i]]!=p[t[i]]){
                return false; 

            }
            m[s[i]]=i+1;
            p[t[i]]=i+1;
        }
        return true;
        
    }
};