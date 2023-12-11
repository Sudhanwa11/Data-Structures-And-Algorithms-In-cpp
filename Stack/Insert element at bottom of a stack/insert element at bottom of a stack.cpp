#include <bits/stdc++.h> 

void insertelement (stack<int>& myStack, int x) {
    //base case
    if (myStack.empty()) {
        myStack.push(x);
        return;
    }
    //store element at top
    int num = myStack.top();
    myStack.pop();

    //recursive call
    insertelement (myStack, x);

    //backtracking
    myStack.push(num);
}

stack<int> pushAtBottom (stack<int>& myStack, int x) {
    insertelement (myStack, x);
    return myStack;
}
