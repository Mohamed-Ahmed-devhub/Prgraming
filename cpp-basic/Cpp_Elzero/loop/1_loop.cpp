#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 6; i++)
    {
        cout << i << "\n";
    }
    cout <<"\n*************************************************\n";
    int nums[ 4 ] = {100, 200, 300, 400 };
    for( int index=0; index<4; index++ )
    {
    cout << nums[ index ] << "\n"; 
    }

    return 0;
}