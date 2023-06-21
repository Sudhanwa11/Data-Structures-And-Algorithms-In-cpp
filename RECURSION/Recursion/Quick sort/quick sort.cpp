#include <iostream>
using namespace std; 
int partition (int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i=start+1; i<=end; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }
    
    int pivotindex = start + count;
    swap(arr[pivotindex], arr[start]);
    
    int i = start, j = end;
    while (i<pivotindex && j>pivotindex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[i] >= pivot) {
            j--;
        }
        if (i<pivotindex && j>pivotindex) {
            swap (arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}
void quickSort (int arr[], int start, int end) {
    //base case
    if (start >= end) {
        return ;
    }
    //partition
    int p = partition (arr, start, end);
    //left part sort
    quickSort (arr, start, p-1);
    //right part sort
    quickSort (arr, p+1, end);
}
int main() {
    int arr[7] = {2,4,6,3,8,9,1};
    int n = 7;
    
    quickSort (arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
