// #include <iostream>
// #include <cmath>
// using namespace std;
// int thepowerr(int num1, int num2)
// {
//     cout << pow(num1, num2);
// }

// int main()
// {
//     thepowerr(2, 5); // 32
//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;
int thepowerr(int num1, int num2)
{
    return pow(num1, num2);
    int result = 1;
    for (int i = 0; i < num2; i++)
    {
        result *-num1;
    }
    cout << result << "\n";
}
int main()
{
    cout << thepowerr(2, 5) << "\n"; // 32
    return 0;
}