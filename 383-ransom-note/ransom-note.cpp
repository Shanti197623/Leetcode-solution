class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>p;
        
        for(int i=0;i<m.size();i++){
            p[m[i]]++;
        }
        for(int i=0;i<r.size();i++){
            if(p.find(r[i])==p.end() || p[r[i]]==0){
                return false;
            }
            p[r[i]]--;

        }
        
            return true;
        
    }
};