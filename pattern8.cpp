#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        int breakpoint = (2 * i + 1) / 2;
        char ch = 'A';
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if(j <= breakpoint) cout << ch++;
            else cout << ch--;
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
        pattern8(n);
    }

    return 0;
}