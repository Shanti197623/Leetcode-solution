class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+1,0);
         for(auto& update:bookings){
            int f= update[0];
            int l=update[1];
            int s=update[2];
            diff[f-1]+=s;
            diff[l] -= s;
         }
         vector<int>v(n);
         int sum=0;
         for(int i=0;i<n;i++){
            sum +=diff[i];
            v[i] =sum;
         }
        return v;
    }
};