#include <iostream>
using namespace std;

int partition (int arr[], int start, int end) {
    int pivot = arr[start];
    int count = 0;
    for (int i = start+1; i <= end; i++) {
        //right part configured
        if (arr[i] <= pivot) {
            count++;
        }
    }
    //placing pivot at correct position
    int pivotindex = start + count;
    swap (arr[pivotindex], arr[start]);
    
    //right part managing
    int i = start, j = end;
    while (i < pivotindex || j > pivotindex) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotindex || j > pivotindex) {
            swap (arr[i++], arr[j--]); 
        }
    }
    return pivotindex;
}
void quicksort (int arr[], int start, int end) {
    //base case
    if (start >= end) {
        return;
    }
    //do partition
    int p = partition (arr, start, end);
    //sort left part
    quicksort (arr, start, p-1);
    //sort right part
    quicksort (arr, p+1, end);
}

int main() {
    int arr[6] = {3,5,1,8,2,4};
    int n = 6;
    quicksort(arr, 0, n-1);
    
    for (int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    cout<<endl;
    
    return 0;
}
