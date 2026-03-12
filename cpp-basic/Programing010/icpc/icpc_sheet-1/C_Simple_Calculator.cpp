#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float x, y;
  cout << "Enter two numbers X and Y : \n";
  cin >> x >> y;
  if(x >= 1 && x <= 100000 && y >= 1 && y <= 100000)
  {
      cout << x << " + " << y << " = " << x+y << "\n";
      cout << x << " * " << y << " = " << x*y << "\n";
      cout << x << " - " << y << " = " << x-y << "\n";
      cout << x << " / " << y << "=  " << x/y << "\n";
  }
  return 0;
}