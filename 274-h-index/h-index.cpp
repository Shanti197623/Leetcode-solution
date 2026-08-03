class Solution {
public:
    int hIndex(vector<int>& c) {
        int n =c.size();
        
        int j=0;
        sort(c.begin(),c.end(),greater<int>());
        
        for(int i=0;i<n;i++){
            if(c[i]>=i+1){
                j++;
            }
            else{
                break;
            }
        }
        return j;
    }
};