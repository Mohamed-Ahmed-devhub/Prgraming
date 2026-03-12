// #include <iostream>
// using namespace std;
// int calc(int n1, int n2);
// int main()
// {
//     cout << calc(10,  20);
//     return 0;
// }
//     int   calc(int n1, int n2)
//     {
//         return n1 + n2;
//     }
#include <iostream>
using namespace std;
float calc( int a, int b, float c);
int main ()
{
    cout << calc( 100, 50, 150.5);
    return 0;
}
float calc ( int a, int b, float c)
{
    return a+b+c;
}

