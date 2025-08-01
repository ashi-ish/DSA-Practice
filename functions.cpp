#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Functions are set of code that perform a specific task.
// Functions are used to modularize the code and make it reusable.
// Functions are used to increase the readability of the code.
//  Functions are used to use same code multiple times without rewriting it.

// Types of functions:
//  void - does not return any value
//  return
//  parameterized
//  non-parameterized

// void printName(string name)
// {
//     cout << "Hello" << " " << name << endl;
// }

// int main()
// {
//     string name;
//     cin >> name;
//     printName(name);
//     return 0;
// }

int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = sum(a, b);
    cout << "Sum of " << a << " and " << b << " is: " << result << endl;
    return 0;
}