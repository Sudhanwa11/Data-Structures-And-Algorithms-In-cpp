#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countBits (int n) {
    if (n == 0) {
        return 0;
    }
    return n % 2 + countBits(n/2);
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
