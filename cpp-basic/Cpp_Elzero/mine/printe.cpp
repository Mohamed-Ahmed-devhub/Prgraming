#include <iostream>
#include <string.h>
#include<array>
using namespace std;
int main()
{
    char fname[] = " mohamed ";
    char lname[] = " ahmed ";

    cout << fname << lname << "\n";
    ;
    cout << strcat(fname, lname) << "\n";
    string firstname = " mohamed ";
    string lastname = " ahmed ";

    cout << firstname + lastname << "\n";
      cout << firstname.append( lastname ) << "\n";

    cout << "\n================================\n";

return 0;
  }