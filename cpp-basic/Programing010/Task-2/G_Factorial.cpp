#include<iostream>
using namespace std;
int main()
{
  long long t, n;
  cin >> t;
  while (t--)
  {
    
    cin >> n;
    long long fact=1;
  
  for( int i=1; i<=n; i++)
  {


    fact*=i;

  
}
  cout << "factorial of : " << fact <<"\n";

  cout << "\n**************\n";
}

  return 0;
}