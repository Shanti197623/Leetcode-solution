class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int n=a.size()-1;
        vector<int>result(a.size(),0);
        int i=0,j=n;
        while(i<=j){
            int l=abs(a[i]);
            int r=abs(a[j]);
            if(l<r){
                result[n]=r*r;
                j--;
            }
            else{
                result[n]=l*l;
                i++;
        }
            n--;

        }
        return result ;
        
    }
};