#include <iostream>
using namespace std;

float money(float salary, int days)
{
    for( int i=0; i<days; i++)
    {
        if( i%7==0)
        {
                days -=2;
        }
    }
    return salary/days;
}


int main()
{
    cout << money(2015, 21) << "\n"; // 134.333
    cout << money(4500, 40) << "\n"; // 150
    return 0;
}