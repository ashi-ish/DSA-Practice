#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// ************* [0, 13, 0]
//  ***********  [1, 11, 1]
//   *********  [2, 9, 2]
//    ******* [3, 7, 3]
//     ***** [4, 5, 4]
//      *** [5, 3, 5]
//       *   [6, 1, 6]

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= (2 * n - (2 * i + 1)); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= i; j++)
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
        pattern7(n);
    }

    return 0;
}
