class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        int s =0;
        int e = a.size()-1;
        int mid = s+(e-s)/2;
         int ans =0; 
    
        while(s<=e){
            if(a[mid]>target){
                ans = a[mid];
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        if(ans<target){
            return a[0];

        }
        
        return ans ;
        
    }
        
        
};