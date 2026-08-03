class Solution {
public:
    int maxArea(vector<int>& a) {
        int n=a.size();
        int st=0,end=n-1;
       int maxarea=INT_MIN;
        while(st<end){
            int w=end-st;
           int ht=min(a[st],a[end]);
            int area=w*ht;
            maxarea= max(area,maxarea);
            a[st]<a[end]?st++:end--;
                
        }
        return maxarea;

        
    }
};