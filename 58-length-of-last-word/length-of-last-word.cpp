class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.size()-1;
        int k=0,l=0;
        while(j>=0){
            if(s[j]!=' '){
                k=j;
                break;
            }
            j--;

        }
        while(k>=0){

            if(s[k]==' '){
                break;
            }
            l++;
            k--;

        }
        return l;
        
    }
};