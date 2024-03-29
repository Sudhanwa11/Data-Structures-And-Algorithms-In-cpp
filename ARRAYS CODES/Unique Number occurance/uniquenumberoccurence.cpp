class Solution {
public:

    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> m;
        unordered_set<int> s;
        unordered_set<int> s1;

        for(int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }

        for(int i = 0; i < arr.size(); i++){
            s1.insert(arr[i]);
        }

        for(auto it = m.begin(); it!=m.end(); it++){
            s.insert(it->second);
        }

        if(s.size() == s1.size()){
            return true;
        }

        return false;
    }
};
