#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, years, rem ,months ,days;
    cin >> n;
    years = n / 365;
    rem = n % 365;
    months = rem / 30;
    days = rem % 30;
    cout << years << " years\n";
    cout << months << " months\n";
    cout << days <<  " days\n";



    return 0;
}