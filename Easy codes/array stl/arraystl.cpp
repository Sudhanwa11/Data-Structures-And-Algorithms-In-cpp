#include <iostream>
#include <array>
using namespace std;
int main() {
    array <int,4> a = {1,2,3,4};
    int size = a.size();
    for(int i = 0; i<size; i++) {
        cout<< a[i]<<endl;
    }
    //to find particular element at an index
    cout<< "element at second " << a.at(2) <<endl;
    //to check whether an array is empty
    cout<< "empty or not " << a.empty() <<endl;
}
