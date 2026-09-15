class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0,k=0;
        int a[2000];
        while(i<n1&&j<n2){
            if(nums1[i]<nums2[j])
            {
                a[k]=nums1[i];
                i++;
            }
            else
            {
                a[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            a[k]=nums1[i];
            i++;k++;
        }
        while(j<n2){
            a[k]=nums2[j];
            j++;k++;
        }
        int st=0;
        int end=k-1;
        if(k%2!=0){
            int mid = (st+end)/2;
            float g=a[mid];
            return g;

        }
        else{
            int mid=(st+end)/2;
            int mid2=mid +1;
           
            return (double)(a[mid]+a[mid2])/2.0;
        }
        
    }

};