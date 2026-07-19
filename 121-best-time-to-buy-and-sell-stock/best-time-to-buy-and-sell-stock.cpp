class Solution {
public:
    int maxProfit(vector<int>& v) {
    int maxi=0;
   int best=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>best){
            maxi= max(maxi,v[i]-best);
        }
        best=min(best,v[i]);
    }
    return maxi;
        
    }
};