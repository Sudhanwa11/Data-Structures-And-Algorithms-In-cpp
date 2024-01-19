#include <bits/stdc++.h>
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector <int> ans;
    int size = a.size();
    if (size == 0 || size == 1) {
        ans.push_back(0);
        return ans;
    }

    int smaller = INT_MAX;
    int secsmaller = INT_MAX;
    int largest = INT_MIN;
    int seclargest = INT_MIN;

    for (int i=0; i<size; i++) {
        smaller = min (smaller, a[i]);
        largest = max (largest, a[i]);
    }

    for (int i=0; i<size; i++) {
        if (a[i] > seclargest && a[i] != largest) {
            seclargest = a[i];
        }
        if (a[i] < secsmaller && a[i] != smaller) {
            secsmaller = a[i];
        }
    }
    ans.push_back(seclargest);
    ans.push_back(secsmaller);
    return ans;
}
