#include <iostream>
using namespace std;

/*
int& func (int a) { ///avoid doing
    int num = a;
    int& ans = num;
    return ans;
}
int* func (int n) {
    int* ptr = n;
    return ptr;
}
*/

void update1 (int n) { //a copy variable created
    n++;
}

void update2 (int& n) { //reference variable created
    n++;
}

int main() {
    
    int i = 5;
    //to create reference variable
    int &j = i;
    j++;
    cout<< i <<endl; //6
    
    int n = 5;
    update1(n);
    cout<<"before referencing variable-> "<< n <<endl; //5?
    
    update2(n);
    cout<< "after referencing variable-> "<< n <<endl; //6
    
    return 0;
}
