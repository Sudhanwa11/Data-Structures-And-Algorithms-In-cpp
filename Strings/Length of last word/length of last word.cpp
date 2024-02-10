class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool foundnonSpace = false;
        
        for (int i=s.size()-1; i>=0; i--) {
            if (s[i] != ' ') {
                foundnonSpace = true;
                length++;
            }
            else if (foundnonSpace) {
                break;
            }
        }
        return length;
    }
};
