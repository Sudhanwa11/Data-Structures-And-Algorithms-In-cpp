#include <iostream>
using namespace std;
int getSum (int *arr, int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    
    int n;
    cout<< "enter number of elements"<<endl;
    cin >> n;
    
    //variable size array
    int *arr = new int [n];
    
    //taking input in array
    cout<< "enter the elements inside"<<endl;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    int ans = getSum(arr, n);
    cout<< "answer is "<< ans <<endl;
    
    /*
    char ch = 'q';
    cout<< sizeof(ch) <<endl; //1 in heap
    
    //using pointer
    char *c = &ch;
    cout<< sizeof(c) <<endl; //8 in stack
    */
    return 0;
}
