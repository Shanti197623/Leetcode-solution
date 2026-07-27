class Solution {
public:
    void rotate(vector<int>& a, int k) {
        vector<int>v;
    int n=a.size();
    k=k%n;
    for(int i=n-k;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<n-k;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        a[i]=v[i];
    }
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
      
        
    }
};