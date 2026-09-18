class Solution {
public:
    int maxArea(vector<int>& a) {
        int n=a.size();
       int s=0;int e= n-1;
       int maxi = INT_MIN;
       int mani=INT_MIN;
       while(s<=e){
        int w = e-s;
        mani = min(a[s],a[e]);
        maxi = max(maxi,mani*w);
        if(a[s]>=a[e]){
            e--;
        }
        else{
            s++;
        }


       }
       return maxi;

        
    }
};