// 1) for the outer loops, count the number of lines
// 2) for the inner loops, focus on the columns and connect them to the rows
// 3) print inside the inner loop
// 4) observer symmetry  [optional]

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern1(n);
    return 0;
}