#include <iostream>
using namespace std;
int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int numsize = sizeof(nums) / sizeof(nums[0]);
    // 100,  300,  500
    // Method 1
    for (int i = 0; i < numsize; i++)
    {
        if (i % 2 == 0)
        {
            cout << nums[i] << "\n";
        }
    }
    cout << "\n*****************************************************\n";
    // Method 2
    for (int i = 0; i < numsize; i++)
    {
        cout << nums[i] << "\n";
        i++;
    }
    cout << "\n*****************************************************\n";
    // Method 3
    for (int i = 0; i < numsize; i += 2)
    {
        cout << nums[i] << "\n";
    }
    cout << "\n*****************************************************\n";
    // 600, 500, 400, 300
    
    for (int i = 5 ; i > 1; i-- )
    {
        cout << nums[i] << "\n";
    }

    return 0;
}