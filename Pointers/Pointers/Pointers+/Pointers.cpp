#include <iostream>
using namespace std;
int main() {
    int arr[10] = {23,122,41,67};
    
    cout<< "address of first memory block "<< arr <<endl;
    cout<< "address of first memory block "<< &arr[0] <<endl;
    
    cout<< "3rd " << *arr <<endl; //23
    cout<< "4th " << *(arr+1) <<endl; //122
    cout<< "5th " << (*arr)+1 <<endl; //24
    cout<< "6th " << *(arr+2) <<endl; //41
    
    int i = 3;
    cout << i[arr] <<endl; //67
    
    
    int temp [10] = {1,2} ;
    cout<< sizeof(temp) <<endl;
    cout<< sizeof(*temp) <<endl;
    cout<< sizeof(&temp) <<endl;
    
    cout<<endl;
    int *ptr = &temp[0];
    cout<< sizeof(ptr) <<endl; //address
    cout<< sizeof(*ptr) <<endl; //value present at address
    
    /*
    int a[20] = {1,2,3,5};
    //all show addresses
    cout<< &a[0] <<endl;
    cout<< &a <<endl;
    cout<< a <<endl;
    
    cout<<endl;
    
    int *p = &a[0];
    cout<< p <<endl;
    cout<< &p <<endl;
    cout<< *p <<endl;
    */
    return 0;
}
