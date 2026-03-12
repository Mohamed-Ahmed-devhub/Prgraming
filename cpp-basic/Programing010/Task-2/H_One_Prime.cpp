#include<iostream>
using namespace std;
int main()
{
  int x;
  cin >> x;
  for(int i=2; i<x; i++)
  {
    if(x%i==0)
    {
      cout << "No\n";

      return 0;     // >> 😣
  }
    
  }
  cout << "yes\n";

  return 0;
}