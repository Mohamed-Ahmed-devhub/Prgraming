#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
        if (i == 2)
        {
            break;
        }
    }

    return 0;
}