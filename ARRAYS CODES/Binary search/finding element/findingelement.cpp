#include <iostream>
using namespace std;
int Binarysearch (int arr[], int size, int element) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while (start<end) {
        //finding mid point
        if (arr[mid] == element) {
            return mid;
        }
        //to go right path
        if (element > arr[mid]) {
            start = mid + 1;
        }
        //to go left path
        else {
           end = mid - 1; 
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main() {
   //example arrays
   int even [6] = {2,4,6,8,12,18};
   int odd [5] = {3,8,11,14,16};
   int evenindex = Binarysearch (even, 6 , 6);
   cout<< "index of 6 is " << evenindex <<endl;
   int oddindex = Binarysearch (odd, 5, 14);
   cout<< "index of 14 is " << oddindex <<endl;
   return 0;
}
