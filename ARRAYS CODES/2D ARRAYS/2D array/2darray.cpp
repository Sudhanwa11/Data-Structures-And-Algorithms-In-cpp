#include <iostream>
using namespace std;
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
    return 0;
}
