#include <iostream>
using namespace std;
int minposition(int numbers[], int numsiz)
{
    int result = 0;
    for (int i = 0; i < numsiz; i++)
    {
        if (numbers[i] <= 0)
        {
            continue;
        }
        result = numbers[i];
    }
    return result;
}
int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
    int numsize = sizeof(numbers) / sizeof(numbers[0]);
    cout << minposition(numbers, numsize) << "\n";
    return 0;
}

// #include <iostream>
// #include <climits> 
// using namespace std;

// int minposition(int numbers[], int numsiz)
// {
//     int result = INT_MAX;

//     for (int i = 0; i < numsiz; i++)
//     {
//         if (numbers[i] > 0 && numbers[i] < result)
//         {
//             result = numbers[i];
//         }
//     }
//     return result;

// }
// int main()
// {
//     int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0};
//     int numsize = sizeof(numbers) / sizeof(numbers[0]);

//     cout << minposition(numbers, numsize) << "\n";
//     return 0;
// }
