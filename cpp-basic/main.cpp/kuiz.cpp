#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  // int n1, n2;
  // char op;
  // cin >> n1;
  // cin >> op;
  // cin >> n2;
  // switch (op)
  // {

  // case '+':
  //   cout << "sum =" << n1 + n2 << "\n";
  //   break;
  // case '-':
  //   cout << "Subtraction =" << n1 - n2 << "\n";
  //   break;
  // case '*':
  //   cout << "Multiplication =" << n1 * n2 << "\n";
  //   break;
  //   cout << "Division =" << n1 / n2 << "\n";
  //   break;
  // default:
  //   cout << "invalid operator\n";
  // }
  // cout << "Do you vnat to calculate anther operation (x/y)\n";

  cout << "\n*************************************************\n";

  // int n, sum = 0;
  // cout << "Enter the number : ";
  // cin >> n;
  // for (int i = 1; i <= n; i++)

  //   sum += i;
  // cout << "sum = " << sum << "\n";

  cout << "\n*************************************************\n";

  int start, end, sum=0;
  cout << "Enter start & end :\n";
  cin >> start >> end;
  for(int i=start; i<=end;i++)
  {
    sum+= (i*i);
  }
cout << "sum of squares = " << sum << "\n";
  return 0;
}
