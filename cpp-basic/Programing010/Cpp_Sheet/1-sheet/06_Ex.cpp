#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float sum, n1, n2, n3, n4, n5;
  cout << "Enter THe five numbers : \n";
  cin >> n1 >> n2 >> n3 >> n4 >> n5;
  sum = n1+n2+n3+n4+n5;
  cout <<" = " << round(sum)  << "\n";
  return 0;
}