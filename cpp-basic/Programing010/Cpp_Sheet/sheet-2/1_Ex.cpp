#include <iostream>
using namespace std;
int main()
{
  double temp, pres;
  cout << "Enter temperature (C): ";
  cin >> temp;
  cout << "Enter pressure (millibar): ";
  cin >> pres;

  if (temp > 20)
  {
    if (pres > 1000)
    {
      cout << "Clear skies and hot\n";
    }
    else
    {
      cout << "Warm with rain\n";
    }
  }
  else
  {
    if (pres > 1000)
    {
      cout << "Clear skies and cold\n";
    }
    else
    {
      cout << "Snow\n";
    }
  }

  return 0;
}