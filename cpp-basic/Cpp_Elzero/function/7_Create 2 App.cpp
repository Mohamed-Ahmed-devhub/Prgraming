#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    cout << "A\n";                      // A
    cout << tolower('A') << "\n";       // 97 
    cout << char(tolower('A')) << "\n"; // a
    cout << char(97) << "\n";           // a
    cout << "=====================\n";
    cout << "b\n";                      // b
    cout << toupper('b') << "\n";       // 66 
    cout << char(toupper('b')) << "\n"; // B
    cout << char(66) << "\n";           // B
    cout << "=====================\n";

    string nameone = "ElZEro"; // eLzeRO
    int nameoneSize = nameone.length();   

    for (int i = 0; i < nameoneSize; i++)
    {
        if (isupper(nameone[i]))
        {
            cout << char(tolower(nameone[i]));
        }
        else
        {
            cout << char(toupper(nameone[i]));
        }
    }

    cout << "\n=====================\n";
    string nametwo = "E  l   Z  r    o";
    int nametwolength= nametwo.length();
    for( int i=0; i< nametwolength; i++ )
    {
        // if(nametwo[i]==" " )
        // {
        //     continue;
        // }
        if( isspace( nametwo[i]))
        {
            continue;
        }
        cout << nametwo[i];
    }
    

    return 0;
}
