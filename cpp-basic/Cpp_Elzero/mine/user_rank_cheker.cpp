#include <iostream>
using namespace std;
int main()
{
    int points;
    cin >> points;

    if (points > 100 && points <= 500)
    {
        cout << "no Bad\n";
    }
    else if (points > 500 && points <= 1000)
    {
        cout << "good";
    }
    else if (points > 1000)
    {
        cout << "vere good";
    }
    else
        cout << "Bad";

    return 0;
}