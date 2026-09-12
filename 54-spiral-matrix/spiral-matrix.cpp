class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int row = m.size();
        int col = m[0].size();
        int srow=0;
        int scol=0;
        int ecol=col-1;
        int erow = row-1;
        int total = row*col;
        int count =0;
        vector<int>ans ;
        while(count<total){
            //print starting row
            for(int i =scol;count<total && i<=ecol;i++){
                ans.push_back(m[srow][i]);
                count++;
            }
            srow++;
            //print last col
            for(int i =srow;count<total && i<=erow;i++){
                ans.push_back(m[i][ecol]);
                count++;
            }
            ecol--;
            //print last row
            for(int i=ecol;count<total && i>=scol;i--){
                ans.push_back(m[erow][i]);
                count++;
            }
            erow--;
            //print starting col
            for(int i=erow;count<total && i>=srow;i--){
                ans.push_back(m[i][scol]);
                count++;

            }
            scol++;
        }
        return ans ; 
        
    }
};