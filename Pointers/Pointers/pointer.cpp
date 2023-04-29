#include <iostream>
using namespace std;
int main() {
    int num = 5;
    cout<< num <<endl;
    
    //address of operator - &
    cout<< "address of num is " << &num <<endl;
    //to create pointers
    int *ptr = &num;
    cout<< "value is " << *ptr <<endl;
    
    double d = 4.3;
    double *p2 = &d;
    cout<< "value is " << *p2 <<endl;
    //printing size of pointer n integer
    cout<< "size of integer is " << sizeof(num) <<endl;
    cout<< "size of pointer is " << sizeof(ptr) <<endl;
    cout<< "size of pointer is " << sizeof(p2) <<endl;
    
    return 0;
}
