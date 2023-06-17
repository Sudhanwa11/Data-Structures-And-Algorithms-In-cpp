#include <iostream>
using namespace std;
void print (int arr[], int size) {
    cout<< "size of array is-> " << size <<endl;
    for (int i=0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}
bool linearsearch (int arr[],int size,int key) {
    print (arr,size);
    //base case
    if (size == 0) {
        return false;
    }
    if (arr[0] == key) {
        return true;
    }
    else {
        bool remainingpart = linearsearch(arr+1, size-1, key);
        return remainingpart;
    }
}
int main() {
    int arr[5] = {2, 4, 9, 10, 13};
    int size = 5;
    int key = 13;
    
    bool ans = linearsearch(arr, size, key);
    
    if (ans) {
        cout<< "element present" <<endl;
    }
    else {
        cout<< "element absent" <<endl;
    }
    return 0;
}
