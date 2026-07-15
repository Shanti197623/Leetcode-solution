class Solution {
public:
    int missingNumber(vector<int>& v) {
        int f;
        sort(v.begin(),v.end());
        for(int i =0;i<v.size();i++){
            if(v[i]!=i){
                return i;
            
            }
        }
       return v.size(); 
    }

    
};