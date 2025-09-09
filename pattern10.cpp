#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void pattern10(int n)
{
    int initialSpaces = 0;
    for (int i = 0 ; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // stars
        for (int j = 0; j < initialSpaces; j++)
        {
            cout << " ";
        }
        // space
        for (int j = 1; j <= n - i ; j++)
        {
            cout << "*";
        }
        initialSpaces = initialSpaces + 2;
        cout << endl;
    }
    initialSpaces = 8;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // stars
        for (int j = 0; j < initialSpaces; j++)
        {
            cout << " ";
        }
        // space
        for (int j = 1; j <= i ; j++)
        {
            cout << "*";
        }
        initialSpaces = initialSpaces - 2;
        cout << endl;
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