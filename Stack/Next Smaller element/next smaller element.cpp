#include <stack>
#include <iostream>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    //A stack s of integers is created. It is initialized with a single element -1.
    stack<int> s;
    s.push(-1);

    //A vector ans of size n is created to store the results.
    vector<int> ans(n);

    for (int i=n-1; i>=0; i--) {
        int current = arr[i];
        //It compares the current element arr[i] with the elements at 
        //the top of the stack (s.top()).
        while (s.top() >= current) {
            s.pop();
        }
        //Once a smaller element is found, it is assigned to ans[i].
        ans[i] = s.top();
        s.push(current);
    }
    return ans;
}
