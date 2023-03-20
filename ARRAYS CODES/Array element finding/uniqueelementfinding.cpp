#include <iostream>
using namespace std;
int main () {
    
    //AN EXAMPLE ARRAY TAKEN
    int array [7] = {2,3,1,6,3,6,2};
    
    //NUMBER OF ELEMENTS 'n'
    int n = 7;
    
    //'m' IS THE NUMBER WHICH IS REPEATING (CAN BE MULTIPLE ALSO)
    int m = n-1/2;
    
    //'answer' IS THE UNIQUE NUMBER WHICH WE HAVE TO FIND
    int answer = 0;
    
    //A LOOP TO FIND THE UNIQUE NUMBER
    for (int i = 0; i<n; i++) {
        answer = answer^array [i];
    }
    
    //PRINTING THE UNIQUE NUMBER
    cout<< answer <<endl;
    return answer;
}
