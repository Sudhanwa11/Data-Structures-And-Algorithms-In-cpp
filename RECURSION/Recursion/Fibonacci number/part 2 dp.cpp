#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007; // Choose a suitable modulo value

vector<int> memo;

int fibonacciNumber(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    memo[n] = (fibonacciNumber(n - 1) + fibonacciNumber(n - 2)) % MOD;
    return memo[n];
}

int main() {
    int n = 10; // Calculate the 10th Fibonacci number

    // Initialize memoization array with -1
    memo.resize(n + 1, -1);

    cout << "Fibonacci number at position " << n << " is: " << fibonacciNumber(n) << endl;

    return 0;
}
