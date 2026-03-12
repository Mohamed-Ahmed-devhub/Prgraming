#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int> nums ={ 20,40,20,-80,70,20,50,20};
  int val =20;
  int countTime = count(nums.begin(), nums.end(),val);
  cout << " Number " << val << " Found " <<  countTime << " Time\n ";

  cout << "\n*******************\n";

  for( int &n: nums )
  {
    cout << n << "\n";
  }

  cout << "\n*******************\n";

  sort(nums.begin(),nums.end()); // <
  for( int &n: nums )
  {
    cout << n << "\n";
  }

  cout << "\n*******************\n";

  reverse(nums.begin(),nums.end()); // <
  for( int &n: nums )
  {
    cout << n << "\n";
  }
  return 0;
}