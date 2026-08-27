class Solution {
public:
    int longestConsecutive(vector<int>& v) {

        unordered_set<int> s;

        for (int x : v) {
            s.insert(x);
        }

        int best = 0;

        for (int x : s) {

            
            if (s.find(x - 1) == s.end()) {

                int current = x;
                int currentLength = 1;

                while (s.find(current + 1) != s.end()) {
                    current++;
                    currentLength++;
                }

                best = max(best, currentLength);
            }
        }

        return best;
    }
};