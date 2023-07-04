#include <iostream>
using namespace std;
int search (int arr[], int n, int x)  {
    int index = 0;
    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0 ; i < n ; i++) {
        if(arr[i] == x){
            cout << i;
            index = index + 1;
            break ;
        }
    }
    if (index != 1) {
        cout << -1;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    int x;
    search (arr, n, x);
    return 0;
}
