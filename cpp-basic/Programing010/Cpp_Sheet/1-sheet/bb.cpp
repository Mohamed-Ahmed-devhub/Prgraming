#include <iostream>
using namespace std;
int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  cout < "Enter The 3 Number\n";
  if(n1>n2)
  {
    cout << n1 << "\n";
  }
  else if(n2>n3)
  {
    cout << n2 << "\n" ;
  }
  else
  {
    cout << n3 << "\n";
  }
  

  return 0;
}