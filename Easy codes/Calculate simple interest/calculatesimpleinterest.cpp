#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    long int principal;
    cin>>principal;
    float roi;
    cin>>roi;
    int timeperiod;
    cin>>timeperiod;
    int simpleinterest = principal*roi*timeperiod/100;
    cout<< simpleinterest;
    return 0;
}
