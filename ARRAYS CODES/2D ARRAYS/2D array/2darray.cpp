#include <iostream>
using namespace std;

bool isPresent (int arr[][4], int target, int row, int col) {
    for (int row=0; row<3; row++) {
        for (int col=0; col<4; col++) {
            if (arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    //to create 2D array
    int arr[3][4];
    //to take input row wise
    for (int row=0; row<3; row++) {
        for (int col=0; col<4; col++) {
            cin >> arr[row][col];
        }
    }
    /*
    //to take input col wise
    for (int col=0; col<4; col++) {
        for (int row=0; row<3; row++) {
            cin >> arr[row][col];
        }
    }
    */
    //to print
    for (int row=0; row<3; row++) {
        for (int col=0; col<4; col++) {
            cout<< arr[row][col] << " ";
        }
        cout<<endl;
    }
    //to find element
    cout<< "enter the element to search" <<endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4)) {
        cout<< "element found" <<endl;
    }
    else {
        cout<< "not found" <<endl;
    }
    return 0;
}
