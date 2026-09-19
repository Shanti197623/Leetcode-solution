class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>l;
        vector<int>m;
        vector<int>n;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                l.push_back(arr[i]);
            }
            else{
                m.push_back(arr[i]);
            }
        }
        int n1 = l.size();
        int n2 = m.size();
        int i = n1-1;
        int j =0;
        int h=0;
        if(n1!=0 && n2!=0){
            while(i>=0 && j<n2){
                int o=x-l[i];
                int g = m[j]-x;
                if(o>g){
                    n.push_back(m[j]);
                    j++;
                    h++;
                    if(h==k){
                        break;
                    }
                }
                else{
                    n.push_back(l[i]);
                    i--;
                    h++;
                    if(h==k){
                        break;
                    }

                }
            }
        }
        if(h!=k){
            while(i>=0){
                n.push_back(l[i]);
                h++;
                i--;
                if(h==k){
                break;
            }
            }
        }
        if(h!=k){
            while(j<n2){
                n.push_back(m[j]);
            j++;
            h++;
            if(h==k){
                break;
            }
                
                
            }
        }
        sort(n.begin(),n.end());
        return n;
        
    }
};