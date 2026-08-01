class Solution {
public:
    int  jump(vector<int>& a) {
     int maxi=0;
     int g=0;
     int k=0;
       for(int i=0;i<a.size()-1;i++){
        maxi=max(maxi,i+a[i]);
        if(i==g){
            k++;
            g=maxi;
        }
    }
       return k;
    
    }
        
    
};