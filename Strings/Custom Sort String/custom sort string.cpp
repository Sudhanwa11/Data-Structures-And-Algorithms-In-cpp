class Solution {
public:
    string customSortString(string order, string s) {
        auto customComparator = [&](char a, char b) {
            return order.find(a) < order.find(b);
        };

        // Sort string s based on the custom comparator
        sort(s.begin(), s.end(), customComparator);

        return s;
    }
};
