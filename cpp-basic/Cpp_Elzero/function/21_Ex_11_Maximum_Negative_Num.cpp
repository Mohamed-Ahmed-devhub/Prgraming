#include <iostream>
#include <climits>
using namespace std;
int firstnegalive( int numbers[], int numsiz )
{
    int result =INT_MIN;
    for( int i=0; i<numsiz; i++)
    {
        if( numbers[i]<0 && numbers[i] >result )
        {
            result = numbers[i];
        }
    }
    return result;
}

int main()
{
    int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; 
    int numsize =sizeof(numbers)/sizeof(numbers[0]);
    cout << firstnegalive(numbers, numsize) << "\n";
    return 0;
}