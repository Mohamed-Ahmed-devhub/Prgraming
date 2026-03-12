#include <iostream>
using namespace std;

int main()
{
    int nums[] = { 10, 20, 30 , 20, 40, 50 };

    for( int i=0; i<6; i++ )
    {
        cout <<nums[ i ] << "\n";
        if( nums[ i ]==10 )
        {
            break;
        }
        // if ( nums[ i ]==20 )
        // {
        //     continue;
        // }
        cout <<nums[ i ] << "\n";
    //     cout << "After\n";
        }

 // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int fbindsize = sizeof(friends) / sizeof(friends[0]);
    for (int i = 0; i < fbindsize; i++)
    {
        if ( friends[i][0] == 'A' )
        {
            continue;
        }
        cout << friends[i] << "\n";
    }
    // Output Needed
    // "Mohamed"
    // "Sayed"





    return 0;
}