#include <bits/stdc++.h> 
vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
    sort(b ,  b + m);
    vector<int>res;
    for(int i = 0; i < n; i++)  
    res.push_back(upper_bound(b , b + m , a[i]) - b);
    return res;
}
