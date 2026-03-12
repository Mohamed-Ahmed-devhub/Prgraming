#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {40, 50, 60, 80};
    vector<int>::iterator it;
    // Loop With Iterator
    for (it = nums.begin(); it < nums.end(); it++)
    {
        cout << *it << "\n";
    }

    cout << "\n======================\n";

    // Range Loop With for
    for (int val : nums)
    {
        cout << val << "\n";
    }

    cout << "\n=======================\n";

    int numbers[5] ={25,30,75,84,96};
    for(int myNumber : numbers )
    {
        cout << myNumber << "\n";
    }

    return 0;
}
