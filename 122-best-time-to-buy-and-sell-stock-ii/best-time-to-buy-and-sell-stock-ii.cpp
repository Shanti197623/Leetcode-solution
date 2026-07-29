class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit=0;
        int k=0;
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]){
                profit+=a[i]-a[i-1];
                k=1;
            }
        }
        if(k==0){
            return 0;
        }
        return profit;
               
    }
};