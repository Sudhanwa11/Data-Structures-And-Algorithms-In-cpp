#include <iostream>
using namespace std;
int hcf (int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    while (a != b) {
        if (a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    return a;
}
int main() {
    int a;
    cout<< "enter the number 1"<<endl;
    cin>>a;
    int b;
    cout<< "enter the number 2 "<<endl;
    cin>>b;
    int ans = hcf (a, b);
    cout<< "hcf of " << a << " " << "&" << " " << b << " " << "is" << " " << ans <<endl;
    return 0;
}
