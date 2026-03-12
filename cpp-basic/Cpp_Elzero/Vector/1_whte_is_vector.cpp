#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numsOne = {10, 20, 30, 40};
    vector<int> numsTwo{100, 200, 300, 400};
    vector<int> numsThree(4, 50);

    for (int i = 0; i < numsOne.size(); i++)
    {
        cout << numsOne.at(i) << " ";
    }

    cout << "\n===========\n";

    for (int i = 0; i < numsTwo.size(); i++)
    {
        cout << numsTwo.at(i) << " ";
    }

    cout << "\n===========\n";

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }

    cout << "\n===========\n";

    cout << "Number Of Elements Is: " << numsThree.size() << "\n";

    numsThree.push_back(1000);

    cout << "Number Of Elements Is: " << numsThree.size() << "\n";

    cout << "\n===========\n";

    numsThree.at(0) = 1000;

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << " ";
    }

    cout << "\n===========\n";

    return 0;
}