class Solution {
public:
    int maxDepth(string s) {
        int d = 0;
        int maximum = 0;

        for (char ch : s) {
            if (ch == '(') {
                d++;
                maximum= max(maximum, d);
            }
            else if (ch == ')') {
                d--;
            }
        }

        return maximum;
    }
};