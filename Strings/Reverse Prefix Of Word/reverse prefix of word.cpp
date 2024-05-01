class Solution {
public:
    string reversePrefix(string word, char ch) {
        // Find the first occurrence of the character 'ch' in 'word'.
        int index = word.find(ch);
      
        // If the character is found (i.e., find() doesn't return string::npos), reverse the substring.
        if (index != string::npos) {
            // Reverse from the beginning of 'word' to the character 'ch' (inclusive).
            reverse(word.begin(), word.begin() + index + 1);
        }
      
        // Return the modified string.
        return word;
    }
};
