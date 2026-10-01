class Solution {
    bool pelindrome(string &s,int low,int high){
        if(low>=high){
            return true;
        }
        if(s[low]!=s[high]){
            return false;
        }
        return pelindrome(s,low+1,high-1);
    }
public:
    string longestPalindrome(string s) {
       long long  int n= s.size();
       long long int maxlen =0;
       long long int start =0;
        for(int i=0;i<n;i++){
            for(int j =i;j<n;j++){
                if(pelindrome(s,i,j)){
                    if (j - i + 1 > maxlen) {
                        maxlen = j - i + 1;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);

    }
};