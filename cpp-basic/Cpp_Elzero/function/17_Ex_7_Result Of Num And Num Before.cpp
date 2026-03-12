#include <iostream>
using namespace std;

int beforeresult(int number, int count)
{
    int sum = 0;
    for (int i = number; i >= number - count; i--)
    {
        sum += i;
    }

    return sum;  
}

int main()
{
    cout << beforeresult(10, 5) << "\n"; 
    cout << beforeresult(15, 3) << "\n"; 
    return 0;
}
// #include <iostream>
// using namespace std;

// int beforeresult(int number, int count)
// {
//     int sum = number;
//     for (int i = 0; i < count; i++)
//     {
//         number--;
//         sum += number;
//     }
//     return sum;
// }

// int main()
// {
//     cout << beforeresult(10, 5) << "\n"; // 45
//     cout << beforeresult(15, 3) << "\n"; // 54
//     return 0;
// }
