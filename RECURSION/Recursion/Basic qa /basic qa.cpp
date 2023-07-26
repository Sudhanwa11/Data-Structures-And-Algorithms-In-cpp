#include <iostream>
using namespace std;

int fibonacci (int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci (n-1) + fibonacci (n-2);
}

int factorial (int n) {
    if (n == 0) {
        return 1;
    }
    int prevfact = factorial (n-1);
    return n * prevfact;
}

int power (int n, int p) {
    if (p == 0) {
        return 1;
    }
    int prevp = power(n, p-1);
    return n * prevp;
}

int main() {
    
    cout << "fibonacci -> " << fibonacci (3) << endl;
    cout << "square -> " << power (2, 3) << endl;
    cout << "factorial is -> " << factorial (5) << endl;

    return 0;
}
