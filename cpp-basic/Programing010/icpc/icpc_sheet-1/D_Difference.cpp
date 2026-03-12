#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int x, a, b, c, d;
  cout << "Enter four numbers a, b, c, d :\n";
  cin >> a >> b >> c >> d;
  if( -100000 <= a && b && c && d <= 100000 )
  {
    x = (a*b) - (c*d) ;
    cout << "Difference = " << x << "\n";
  }
  return 0;
}