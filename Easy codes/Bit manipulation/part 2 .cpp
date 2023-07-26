#include <iostream>
using namespace std;

bool ispowerof2 (int n) {
    return (n && !(n & n-1));
}

int numof1 (int n) {
    int count = 0;
    while (n) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main() {
    
    cout<< ispowerof2 (15) <<endl; //0
    cout<< numof1 (19) <<endl; //3
    return 0;
}
