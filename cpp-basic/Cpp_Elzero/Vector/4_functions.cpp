#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {20, 50, 80, 140, 90};
    cout << nums.size() << "\n";
    cout << nums.max_size() << "\n";
    nums.push_back(50);
    nums.push_back(80);
    nums.push_back(140);
    nums.push_back(90);
    cout << nums.capacity() << "\n";
    
    cout << nums.front() << "\n";
    cout << nums.at(0) << "\n";
    
    cout << nums.back() << "\n";
    cout << nums.at(nums.size()-1) << "\n";
    
    nums.clear(); // empty
    cout << nums.size() << "\n";

    nums.push_back(200); //Not empty
    if(nums.empty())
    {
        cout << "Vector Is Empty\n";
    }
    else
    {
        cout << "Vector Is Not Empty\n";
    }
    return 0;
}