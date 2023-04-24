#include <iostream>
#include <climits>
using namespace std;
bool isPresent (int arr[][3], int target, int row, int col) {
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
            if (arr[row][col] == target) {
                return 1;
            }
        }
    }
    return 0;
}
//to print sum of rows
void printSum (int arr[][3], int row, int col) {
    cout<< "printing the sum-> "<<endl;
    for (int row=0; row<3; row++) {
        int sum = 0;
        for (int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout<<endl;
}
int largestrowSum (int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int row=0; row<3; row++) {
        int sum = 0;
        for (int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<< "maximum sum is " << maxi <<endl;
    cout<<endl;
    return rowIndex;
}
int main() {
    //to create 2D array
    int arr[3][3];
    //to take input row wise
    cout<< "enter the elements"<<endl;
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
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
    cout<< "printing the array "<<endl;
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
            cout<< arr[row][col] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    //to find element
    cout<< "enter the element to search" <<endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 3)) {
        cout<< "element found" <<endl;
    }
    else {
        cout<< "not found" <<endl;
    }
    cout<<endl;
    
    printSum(arr, 3, 3);
    cout<<endl;
    
    int ansIndex = largestrowSum(arr, 3, 3);
    cout<< "max row is at index " << ansIndex <<endl;
    cout<<endl;
    return 0;
}
