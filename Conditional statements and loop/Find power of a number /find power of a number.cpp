#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin>> x >> n;
    int value = 1;

    for (int i = 1; i <= n; i++) {
        value *= x;
    }
    
    cout<< value;
    return 0;
}
