class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {

        int m = v.size();
        int n = v[0].size();

        int low = 0;
        int high = m * n - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int row = mid / n;
            int col = mid % n;

            if(v[row][col] == target) {
                return true;
            }
            else if(v[row][col] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return false;
    }
};