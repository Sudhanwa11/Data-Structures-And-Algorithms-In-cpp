#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main() {
    int startf, endf, w;
    int celsius;
    cin>> startf>> endf>> w;

    while (startf <= endf) {
       celsius = (5.0/9)*(startf - 32) ;
       cout << startf << " " << celsius << endl ;
       startf = startf + w ;
    }
    return 0;
}
