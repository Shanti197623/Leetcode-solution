class Solution {
public:
    int findMin(vector<int>& a) {
        int n = a .size();
        int s =0;
        int e = n-1;
         while(s<e){
            int mid = s+(e-s)/2;
            if (a[mid] < a[e])
                e = mid;
            else if (a[mid] > a[e])
                s = mid + 1;
            else
               e--;
        }
        
        return a[e];
    }
};