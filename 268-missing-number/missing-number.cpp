class Solution {
public:
    int missingNumber(vector<int>& v) {
        int f =0;
        int n=v.size();
        for(int i =0;i<n;i++){
            f+=v[i];
        }
        int t=(n*(n+1))/2;
        int j= t-f;
        return j;
    }

    
};