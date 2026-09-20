class Solution {
public:
    void sortColors(vector<int>& a) {
        int s =0;
        int mid = 0;
        int g = a.size()-1;
        while(mid<=g){
            if(a[mid]==0){
                swap(a[mid],a[s]);
                s++;
                mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid],a[g]);
                g--;
                
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i];
        }
          
    }
};