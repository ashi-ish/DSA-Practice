#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Pass by value means passing a copy of the variable to the function.
// Any changes made to the parameter inside the function do not affect the original variable.
// This is the default behavior in C++ for primitive data types.
void increment(int num)
{
    num++;
    cout << num << endl; // This will print the incremented value
    num++;
    cout << num << endl; // This will print the incremented value again
    num++;
    cout << num << endl; // This will print the incremented value again
}

int main()
{
    int num = 10;
    increment(num);
    cout
        << num << endl; // This will print the original value, which is still 10
    return 0;
}
