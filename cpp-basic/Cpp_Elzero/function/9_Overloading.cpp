#include <iostream>
#include <string.h>
using namespace std;
void print(int a, int b)
{
    cout << " Number one is: " << a << "\n";
    cout << "Number Two is: " << b << "\n";
}
void print(int a, int b, int c)
{
    cout << " Number one is: " << a << "\n";
    cout << "Number Two is: " << b << "\n";
    cout << "Number three is: " << c << "\n";
}
void print(string a, string b)
{
    cout << " Text one: " << a << "\n";
    cout << " Text Two is: " << b << "\n";
}
int main()
{
    print(50, 60);
    print(10, 20, 30);
    print("Hassan", "Mohamed");

    return 0;
}
