class Solution {
public:
    int maxVowels(string a, int k) {
        int left =0;
         int l=0,best=0;
         for(int i=0;i<a.size();i++){
            if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
                l++;
            }
            if(i-left+1>k){
                if(a[left]=='a'|| a[left]=='e'||a[left]=='i'||a[left]=='o'||a[left]=='u'){
                l--;
            }
                left++;
            }
            if(i-left+1==k){
                best=max(best,l);
                
            }
         }
       return best; 
    }
};