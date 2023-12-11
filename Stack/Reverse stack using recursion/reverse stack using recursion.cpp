void insertelement (stack<int>& s, int x) {
    //base case
    if (s.empty()) {
        s.push(x);
        return;
    }
    //store element at top
    int num = s.top();
    s.pop();

    //recursive call
    insertelement (s, x);
    
    //backtracking
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    //base case
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack (stack);
    insertelement (stack, num);
}
