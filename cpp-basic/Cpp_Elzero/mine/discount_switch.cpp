#include <iostream>
using namespace std;
int main()
{
  int price = 100;
  int discount = 10;
  int years;
  cout << " type the numbers of years in company\n ";
  cin >> years;

  switch (years)
  {
  case 1:
    discount = 20;
    break;

  case 2:
    discount = 40;
    break;

  case 3:
    discount = 80;
    break;
  }
  cout << " the price is => " << price - discount << "\n";

  return 0;
}