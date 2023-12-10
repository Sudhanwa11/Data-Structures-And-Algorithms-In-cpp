#include <bits/stdc++.h>
bool isValidParenthesis (string s) {
    stack<char> parenthesis;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            parenthesis.push(ch);
        } 
        else {
            if (!parenthesis.empty()) {
                char top = parenthesis.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[')) {
                    parenthesis.pop();
                } 
                else {
                    return false;
                }
            } 
            else {
                return false;
            }
        }
    }
    if (parenthesis.empty()) {
        return true;
    }
    else {
        return false;
    }
}
