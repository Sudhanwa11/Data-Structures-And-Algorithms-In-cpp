#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int totalsalary, basicsalary;
    char grade;
    float allow;
    cin>> basicsalary >> grade;
    float hra = 0.2 * basicsalary;
    float da = 0.5 * basicsalary;
    float pf = 0.11 * basicsalary;
    
    switch (grade) {
        case 'A': allow = 1700;
        break;
        case 'B': allow = 1500;
        break;
        case 'C': allow = 1300;
        break;
        default: allow = 1300;
        break;
    }
    totalsalary = round ((basicsalary + hra + da + allow) - pf);
    cout<< totalsalary;
    return 0;
}
