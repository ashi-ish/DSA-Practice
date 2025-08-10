// Live Coding Question 2: “Balanced Brackets Validator”
// Category: Stack + Collections
// Estimated Time: 15 minutes
// Difficulty: Intermediate
// Problem Statement:
// Write a method that checks whether a given string has balanced brackets.
// The string may contain (), {}, and []. All brackets must be closed in the
// correct order.
// Function Signature:
// public boolean isBalanced(String expression);

// Example:
// isBalanced("{[()]}") => true
// isBalanced("{[(])}") => false
// isBalanced("((()))") => true
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Paranthesis
{
public:
    bool isValid(string str)
    {
        stack<char> stack;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            {
                stack.push(str[i]);
            }
            else
            {
                if (stack.size() == 0)
                {
                    return false;
                }
                else
                {
                    if ((stack.top() == '(' && str[i] == ')') ||
                        (stack.top() == '{' && str[i] == '}') ||
                        (stack.top() == '[' && str[i] == ']'))
                    {
                        stack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return stack.size() == 0;
    }
};

int main() {
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;
    cin.ignore(); // To consume the newline after the number
    Paranthesis p;
    for (int i = 0; i < n; ++i) {
        string expr;
        getline(cin, expr);
        if (p.isValid(expr))
            cout << "Balanced" << endl;
        else
            cout << "Not Balanced" << endl;
    }
    return 0;
}