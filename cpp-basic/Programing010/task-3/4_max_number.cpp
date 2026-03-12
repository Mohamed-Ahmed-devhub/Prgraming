//Finding the maximum/minimum of a set of numbers
#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    int x; 
    cin >> x; 
    int maxNum = x; 
    int minNum = x; 

    for(int i = 1; i < n; i++)
    {
        cin >> x; 

        if(x > maxNum)
            maxNum = x;

        if(x < minNum)
            minNum = x;
    }

    cout << "Max = " << maxNum << endl;
    cout << "Min = " << minNum << endl;

    return 0;
}