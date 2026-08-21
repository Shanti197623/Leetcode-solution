class Solution {
public:
    int findNumbers(vector<int>& n) {
        vector<int>v;
        int j=0;
        for(int i=0;i<n.size();i++){
            int l=0;
            while(n[i]!=0){

                n[i]/=10;
                l++;
            }
            if(l%2==0){
                j++;
            }
        }
        return j;
    }
};