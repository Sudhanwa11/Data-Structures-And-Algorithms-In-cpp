#include <iostream>
using namespace std;
int main(){
    int rows, column;
    cin>> rows>> column;
    for (int i=1; i<=rows; i++) {
        for (int j=1; j<=column; j++) {
            if (i == 1 || i == rows) {
                cout<< "*";
            }
            else if (j == column || j == 1) {
                cout<< "*";
            }
            else {
                cout<< " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
