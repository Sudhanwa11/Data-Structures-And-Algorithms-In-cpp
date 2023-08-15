#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int factor = 1;

    if (n < 0) {
      cout << "Error";
    } 
    else if (n == 0) {
      cout << factor;
    } 
    else {
      for (int i = 1; i <= n; i++)
      factor = factor * i;
      cout << factor;
    }
    return 0;
}
