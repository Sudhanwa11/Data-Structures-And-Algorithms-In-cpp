#include <iostream>
using namespace std;

bool isPrime (int n) {
    if (n<=1) {
        return false;
    }

    for (int i=2; i<n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cout<< "enter the number"<<endl;
    cin>>n;

    if (isPrime(n)) {
        cout<< "is a prime number"<<endl;
    }
    else {
        cout<< "not a prime number"<<endl;
    }

    return 0;
}
