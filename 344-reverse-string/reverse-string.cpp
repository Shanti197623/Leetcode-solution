class Solution {
public:
    void reverseString(vector<char>& s) {
        int e=0;
        int n = s.size()-1;
        while(e<n){
            swap(s[e++],s[n--]);
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
        
    }
};