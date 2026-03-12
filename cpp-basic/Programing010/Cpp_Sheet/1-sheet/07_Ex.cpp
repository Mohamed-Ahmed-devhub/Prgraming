#include<iostream>
// #include<cmath>
using namespace std;
int main()
{
  cout << "Enter The Number of seconds:\n";
  int totalseconds, hours, minutes, rest;
  cin >> totalseconds;
    hours = totalseconds / 3600;
    rest = 
    minutes = totalseconds % 3600 / 60;
    int seconds = totalseconds % 60;
    cout << "Time = " << hours <<":"<< minutes <<":" << seconds << "\n";
  return 0;
}