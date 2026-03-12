#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    cout << min(20, -30) << "\n";
    cout << min(10, 20) << "\n";

    cout << min('a', 'c') << "\n";
    cout << min('a', 'C') << "\n";
    cout << min({10, 30, 50, -50, -110, 100, -90}) << "\n";

    cout << "\n********************************************\n";

    cout << max(20, -30) << "\n";
    cout << max(10, 20) << "\n";

    cout << max('a', 'c') << "\n";
    cout << max('a', 'C') << "\n";
    cout << max({10, 30, 50, -50, -110, 100, -90}) << "\n";

    cout << "\n********************************************\n";

    int num[ ] = {10, 30, 50, -50, -100, 100, -90};
    int numsiz=sizeof(num)/sizeof( num[0]);
    int  checkMinNum =0;
    for( int i=0; i<numsiz; i++ )
    {
        if( num[i] < checkMinNum)
        {
        checkMinNum =num [i];
        }
    }
    cout << checkMinNum << "\n";  //-110

    cout << "\n********************************************\n";

    int numTwo[ ] = { 10, 20, 10, 30, 10, 90, 10, 30, 10 };
    int numsizetwo = sizeof( numTwo)/sizeof( numTwo[0]);
    int counter = 0;
    int choosenum = 10;
    for( int i=0; i<numsizetwo; i++)
    {
        if(numTwo[i]==choosenum)
        {
            counter ++;
        }
    }
    cout << choosenum << " Found " << counter << " Times " ;

    return 0;
}