#include <iostream>
using namespace std;
int sumall( int numbers[], int numsiz, int noneed )
{
    int sum =0;
    for( int i=0; i< numsiz; i++)
    {
        if( numbers[i]== noneed)
        {
            continue;
        }
        sum+=numbers[i];
    }
    return sum;
}
int main()
{
    int numbers[] = {13, 20, 3, 30, 5, 7, 40, 13}; // 20 + 3 + 30 + 5 + 7 + 40 = 105
    int numsiz = sizeof( numbers)/sizeof( numbers[0]);
    int noneed = 13;
    cout << sumall(numbers, numsiz, noneed) << "\n";
    return 0;
}