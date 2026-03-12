#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1, n2 , op;
    cout << " type number one\n";
    cin >> n1;
    cout << " type number tow\n";
    cin >> n2;
    cout << " cohosh operation number\n ";

    // cout << " [1] +\n ";
    // cout << " [2] -\n ";
    // cout << " [3] /\n ";
    // cout << " [4] *\n ";
    cin >> op;

if( op==1 )
{
    cout << n1 + n2 << "\n";
}
else
if( op==2 )
{
    cout << n1 - n2 << "\n";
}
else
if( op==3 )
{
    cout << n1 / n2 << "\n";
}
else
if( op==4 )
{
    cout << n1 * n2 << "\n";
}


    // switch (op)
    // {
    // case 1:
    //     cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
    //     break;

    // case 2:
    //     cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
    //     break;

    // case 3:
    //     cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
    //     break;

    // case 4:
    //     cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
    //     break;

    // }

    return 0;
}