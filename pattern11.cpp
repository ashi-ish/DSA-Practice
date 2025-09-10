#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void pattern10(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1 ; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n) stars = 2 * n - i;
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n) spaces = spaces - 2;
        else spaces = spaces + 2;
    }
}

int main()
{
    int n, t;
    cin >> t;
    for (int i = 0; i < t; i++) // checking for different test cases
    {
        cin >> n;
        pattern10(n);
    }

    return 0;
}