#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << " Enter Number one : \n";
    cin >> n1;
    cout << " Enter Number Towe : \n";
    cin >> n2;
    cout << "\n********************************\n";

    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    for (int i = n1 + 1; i < n2; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << "\n";
        }
    }
/*
Test Case 1
Number One: 1
Number Two: 9
Output: 3, 5, 7

Test Case 2
Number One: 2
Number Two: 15
Output: 3, 5, 7, 9, 11, 13

Test Case 3
Number One: 8
Number Two: 2
Output: 3, 5, 7
*/
    return 0;
}
