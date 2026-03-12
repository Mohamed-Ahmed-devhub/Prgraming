#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {20, 60, 80, 90, 30};
    vector<int>::iterator it = nums.begin();
    cout << "First Element Is: " << *it << "\n"; //20
    cout << "First Element Is: " << *nums.begin() << "\n"; //20
    auto ite = nums.begin() + 3;
    cout << "Secund Element Is: " << *ite << "\n"; //90
    
    nums.erase(nums.begin(), nums.begin()+2);
    cout << "First Element After Deleat Is: " << *nums.begin() << "\n"; //80
    return 0;
}