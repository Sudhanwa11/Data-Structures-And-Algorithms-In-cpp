class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_to_t_mapping;
        unordered_map<char, char> t_to_s_mapping;
        
        for (int i = 0; i < s.length(); ++i) {
            if (s_to_t_mapping.find(s[i]) != s_to_t_mapping.end()) {
                if (s_to_t_mapping[s[i]] != t[i])
                    return false;
            } 
            else {
                s_to_t_mapping[s[i]] = t[i];
            }
            
            if (t_to_s_mapping.find(t[i]) != t_to_s_mapping.end()) {
                if (t_to_s_mapping[t[i]] != s[i])
                    return false;
            } 
            else {
                t_to_s_mapping[t[i]] = s[i];
            }
        }
        
        return true;
    }
};
