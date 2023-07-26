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

void subsets (int arr[], int n) {
    for (int i=0; i < (1<<n); i++) {
        for (int j=0; j<n; j++) {
            if (i & (i<<j)) {
                cout<< arr[j] << " ";
            }
        }
        cout<< endl;
    }
}

int main() {
    
    cout<< ispowerof2 (15) <<endl; //0
    cout<< numof1 (19) <<endl; //3
    int arr[4] = {1,2,3,4};
    subsets (arr, 4);
    return 0;
}
