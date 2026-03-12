#include <iostream>
#include<cmath> 
using namespace std;
int plusandmultiply( int numbers[], int siz)
{
    int sum_even =0;
    int product_odd=1;
    for( int i=0; i<siz; i++)
    {
        if( numbers[i]%2==0)
        {
            sum_even+=numbers[i] ;
        }
        else
        {
            product_odd*=numbers[i] ;
        }
    }
    return sum_even + product_odd; 
}


int main()
{
    int numbers[] = {10, 20, 3, 30, 5, 7, 40};
    int numsiz =sizeof( numbers)/sizeof(numbers[0]);
    cout << plusandmultiply(numbers, numsiz) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205
    return 0;
}