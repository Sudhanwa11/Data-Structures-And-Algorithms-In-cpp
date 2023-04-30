#include <iostream>
using namespace std;

void print (int *p) {
    cout << *p << endl; //value 
    cout << p << endl; //address
}

void update (int *p) {
    //p = p+1;
    //cout <<"inside "<< p << endl;
    *p = *p + 1;
    
}

int getSum (int *arr, int n) { 
    //as array only pointers gets PASSED in functions
    cout<< endl << "size "<< sizeof(arr) <<endl;
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *p = &value;
    print(p);
    
    cout<<"before "<< *p <<endl;
    update(p);
    cout<<"after "<< *p <<endl;
    
    int arr[5] = {1,2,3,4,5};
    cout<< getSum(arr,5) <<endl;
    
    return 0;
}
