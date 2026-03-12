
#include <iostream>
using namespace std;

int main()
{
    int max, a, b, c;

    cout << "Enter 3 Numbers : \n";
    cin >> a >> b >> c;

    max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    cout << "the Max Number = " << max ;

    if (max % 2 == 0)
        cout << " : Even\n";
    else
        cout << " : Odd\n";

    return 0;
}