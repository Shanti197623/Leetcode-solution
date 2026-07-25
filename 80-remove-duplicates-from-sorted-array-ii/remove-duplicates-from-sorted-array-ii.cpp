class Solution {
public:
    int removeDuplicates(vector<int>& a) {
    int n= a.size();
    if(n<=2)
    return n;
    int k=2;
    for(int i=2;i<n;i++){
        if(a[i]!=a[k-2]){
        a[k]=a[i];
        k++;
        }
    }
        return k;
            
        
    }
};