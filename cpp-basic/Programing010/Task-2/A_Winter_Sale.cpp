#include<iostream>
using namespace std;
int main()
{
  double x, p, y, i;
  cin >> x >> p;
  if(1 <= x <=99 && 4<= p <= 4*4000)
  {

  cout << x << " " << p << "\n";

  i = 100 - x; 

  y = p/i*100;  

  cout <<  "before the discount = " << y << "\n";
  
  }

  return 0;
}