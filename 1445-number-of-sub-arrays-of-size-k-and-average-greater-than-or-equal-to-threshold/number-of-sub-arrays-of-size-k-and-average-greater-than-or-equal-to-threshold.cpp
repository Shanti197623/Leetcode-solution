class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int l=0,left=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        

        }
        if(sum/k>=threshold){
        l++;
        }
        for(int i=k;i<arr.size();i++){
            sum-=arr[left];
            sum+=arr[i];
            if(sum/k>=threshold){
                l++;
            }
            left++;
        }
        return l;

    }
};