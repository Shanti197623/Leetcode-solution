class Solution {
public:
    bool canJump(vector<int>& a) {
        int maxi=0;
       for(int i=0;i<a.size();i++){
        if(i>maxi){
            return false;
        }
        maxi=max(maxi,i+a[i]);
        if(maxi>=a.size()-1){
            return true;
        }
     
       }
    return true;
    }
      
};