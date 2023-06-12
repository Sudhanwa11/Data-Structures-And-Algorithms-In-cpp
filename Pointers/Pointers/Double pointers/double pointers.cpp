#include <iostream>
using namespace std;



int main() {


    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;
    
    //values
    cout<< "value of i is "<< i <<endl;
    cout<< "printing ptr" << endl << *ptr <<endl << endl;
    cout<< "printing ptr2" << endl << **ptr2 <<endl << endl;
    cout<< "printing ptr3" << endl << ***ptr3 <<endl << endl;
    
    cout<< endl;
    
    //address
    cout<< &i << endl << endl;
    cout<< "printing ptr" << endl << ptr <<endl << endl;
    cout<< "printing ptr2" << endl << ptr2 <<endl << endl;
    cout<< "printing ptr3" << endl << ptr3 <<endl << endl;
    
    return 0;
}
