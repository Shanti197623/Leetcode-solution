class Solution {
public:
    vector<int> searchRange(vector<int>& n, int target) {
        
        vector<int>v;
        int i=0;
        int j=n.size()-1;
        int  mid,start=-1,end=-1;
        while(i<=j){
            mid=i+(j-i)/2;
            if(n[mid]==target){
                start=mid;
                j=mid-1;
            }
            else if(target>n[mid]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        v.push_back(start);
         i=0; j=n.size()-1;
        
        while(i<=j){
            mid=i+(j-i)/2;
            if(n[mid]==target){
                end=mid;
                i=mid+1;
            }
            else if(target>n[mid]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        v.push_back(end);
        return v;
        

        
    }
};