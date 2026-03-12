
#include<iostream>
using namespace std;
int main()
{
  long long N, sum=0;
  cin >> N;
  int a[N];
  for(int i=0; i< N ; i++)         
  {                                
    cin >> a[i];                                                           
    
    sum += a[i];
  }
  cout << abs(sum) << "\n"; 
  return 0;
}    