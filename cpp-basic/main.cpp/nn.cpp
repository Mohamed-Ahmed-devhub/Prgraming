#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string s = (num%2==0)? "even" : "odd";
    cout << s << "\n";

  return 0;
}