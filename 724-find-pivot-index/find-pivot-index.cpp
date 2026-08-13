class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int total=0;
        
        for(int i=0;i<a.size();i++){
            total+=a[i];
        }
        int left=0;
        for(int i=0;i<a.size();i++){
            
            int right=total-left-a[i];
            if(left==right){
                return i;
            }
            left+=a[i];
        }
        return -1;

        
    }
};