#include <iostream>
using namespace std;
void printarray (int arr[], int n) {
    for (int i = 0; i<n; i++) {
        cout<< arr[i] <<endl;
    }
}
void sort1 (int arr[], int n) {
    int left = 0;
    int right = n-1;
    while (left<right) {
        while (arr[left] == 0 && left<right) {
            left++;
        }
        while (arr[right] == 1 && left<right) {
            right--;
        }
        if (arr[left]==1 && arr[right]==0 && left<right) {
        swap (arr[left], arr[right]);
        left++;
        right--;
        }
    }
}
int main() {
    int array [8] = {1,1,0,0,0,0,1,0};
    sort1 (array, 8);
    printarray (array, 8);
    return 0;
}
