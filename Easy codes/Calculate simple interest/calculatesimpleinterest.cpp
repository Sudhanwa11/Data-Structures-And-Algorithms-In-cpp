#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    long int principal;
    float roi;
    int timeperiod;
    cin>> principal >> roi >> timeperiod;
    int simpleinterest = principal*roi*timeperiod/100;
    cout<< simpleinterest;
    return 0;
}
