#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << " choose A Dayse Frome 1 To 25\n ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << " Open from 8:00 to 14:00\n ";
        break;

    case 2:
        cout << " Open from 10:00 to 14:00\n ";
        break;

    case 3:
        cout << " Open from 8:00 to 16:00\n ";
        break;

    case 4:
        cout << " Open from 10:00 to 16:00\n ";
        break;

    case 5:
    case 6:
        cout << " Open from 8:00 to 18:00\n ";
        break;
    case 7:
        cout << " Open from 11:00 to 14:00\n ";
        break;

    default:
        cout << "closed";
    }

    return 0;
}
