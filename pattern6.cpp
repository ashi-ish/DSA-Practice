#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
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
        pattern5(n);
    }

    return 0;
}