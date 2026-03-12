#include <iostream>
using namespace std;

void calcspecial(int First, int Second)
{
    if (First == Second)
    {
        cout << First << "+" << Second << "=" << First + Second << "\n";
    }
    if (First > Second)
    {
        cout << First << "-" << Second << "=" << First - Second << "\n";
    }
    if( First < Second )
    {
        cout << Second << "-" << First << "=" << Second - First << "\n";
    }
}

int main()
{
    calcspecial(40, 40);    // 80
    calcspecial(200, 50);  // 150
    calcspecial(100, 300); // 200
    return 0;
}
