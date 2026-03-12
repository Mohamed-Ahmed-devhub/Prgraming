#include <iostream>
using namespace std;
int main()
{
    int nums[] = {100, 200, 300, 400, 500, 600};
    int numscount = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < numscount; i++)
    {
        cout << nums[i] << "\n";
    }
    int i = 0;
cout << "\n**********************************************************\n";
    for (;;)
    {
        cout << nums[i] << "\n";
        i++;
        if (i == 5)
        {
            break;
        }
    }
    return 0;
}