#include <iostream>
#include <cctype>

using namespace std;
string swapping( string name )
{
    int namelength = name.length();
    for ( int i=0; i< namelength; i++) 
    {
        if( name[i] == 'H' || name[i] == 'h' )
        {
            continue;
        }
        if(isupper(name[i]))
        {
            name[i]=tolower(name[i]);
        }
        else if( islower( name[i] ))
        {
            name[i]=toupper(name[i]);
        }
        }
        return name;

    }
int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
    return 0;
}
// #include <iostream>
// #include <iostream>
// #include <cctype>
// using namespace std;

// string change(string name)
// {
//     int namelength = name.length();

//     for (int i = 0; i < namelength; i++)
//     {
//         if (name[i] == 'a' || name[i] == 'A')
//         {
//             continue;
//         }

//         if (isupper(name[i]))
//         {
//             name[i] = tolower(name[i]);
//         }
//         else if (islower(name[i]))
//         {
//             name[i] = toupper(name[i]);
//         }
//     }

//     return name;
// }

// int main()
// {
//     cout << change("BANana is AwESOme") << "\n";//banaNA IS AwesoME

//     return 0;
// }
