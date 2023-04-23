class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        while (i<n) {
            int j = i+1;
            while (j<n && chars[i] == chars[j]) {
                j++;
            }
            //reach here when vector traverse complete or new different character encounter
            //old char store
            chars[ansIndex++] = chars[i];
            int count = j-i;
            //convert counting intosingle digit and saving in answer
            if (count>1) {
                string cnt = to_string(count);
                for (char ch: cnt) {
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};
