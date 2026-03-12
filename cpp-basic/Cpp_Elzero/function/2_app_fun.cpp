#include <iostream>
#include <string>
using namespace std;
// TODO
void iceBox(string item)
{
    if (item == "coca cola")
    {
        cout << item << " Will be more could" << "\n";
    }
    else if (item == "Apple")
    {
        cout << item << " Will be more Fresh" << "\n";
    }
    else if (item == "juice")
    {
        cout << item << " Will be more good" << "\n";
    }
    else
    {
        cout << item << " Is invalid" << "\n";
    }
}


void calc(int numone, int numTow, char op)
{
    if (op == '+')
    {
        cout << numone << " + " << numTow << " = " << numone + numTow << "\n";
    }
    else if (op == '-')
    {
        cout << numone << " - " << numTow << " = " << numone - numTow << "\n";
    }
    else if (op == '*')
    {
        cout << numone << " * " << numTow << " = " << numone * numTow << "\n";
    }
    else if (op == '/')
    {
        if (numTow != 0)
            cout << numone << " / " << numTow << " = " << numone / numTow << "\n";
        else
            cout << "Error\n";
    }
    else
    {
        cout << "Invalid Operation\n";
    }
}

int main()
{
    iceBox("coca cola");
    iceBox("Apple");
    iceBox("juice");
    iceBox("Tv Remote");

    calc(495, 505, '+');
    calc(100, 50, '-');
    calc(10, 5, '*');
    calc(10, 2, '/');

    return 0;
}
