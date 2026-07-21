class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        string v=""; 
        
        for(int i=0;i<n;i++){
            char c= s[i];
            if(c>='A'&& c<='Z'){
                v.push_back(c+32);
            }
            else{
                v.push_back(c);
            }
            
        }
        return v;

        
    }
};