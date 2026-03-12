#include <iostream>
#include <array>
#include <iterator>
#include <string.h>
using namespace std;

int main()
{

    int num[] = {1000, 2000, 5000, 6000, 55};
    cout << " first elemint >>>" << num[0] << "\n";

    cout << " last element >>> " << num[4] << "\n";

    cout << "\n======================================\n";

    cout << " Location >>> " << &num[0] << "\n";

    cout << " Location  >>> " << &num[1] << "\n";

    cout << " Location  >>> " << &num[2] << "\n";

    cout << "\n======================================\n";

    int nums[4];
    nums[1] = 100;
    nums[3] = 300;
    nums[2] = 200;
    nums[0] = 50;

    cout << " Element 1 : " << nums[0] << "\n";
    cout << " Element 2 : " << nums[1] << "\n";
    cout << " Element 3 : " << nums[2] << "\n";
    cout << " Element 4 : " << nums[3] << "\n";

    int anum[] = {100, 200, 300, 400, 500, 600, 700};
    cout << " array elements count is: " << sizeof(anum) / sizeof(0) << "\n";

    cout << "\n======================================\n";

    int points_a[3] = {4, 5, 6};
    int points_b[3] = {7, 8, 9};
    int points_c[3] = {10, 11, 12};

    int points[3][3] = {{4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << points[0][2] << "\n"; // 6
    cout << points[1][1] << "\n"; // 8
    cout << points[2][0] << "\n"; // 10

    cout << "\n======================================\n";

    // int point[4] = {1, 2, 3, 4};
    array<int, 4> point = {1, 2, 3, 4};

    cout << point[0] << "\n";
    cout << point[1] << "\n";
    cout << point[2] << "\n";
    cout << point[3] << "\n";
    cout << " Element count : " << point.size() << "\n";
    cout << "\n======================================\n";

    point.fill(10);
    cout << point[0] << "\n";
    cout << point[1] << "\n";
    cout << point[2] << "\n";
    cout << point[3] << "\n";
    cout << "\n======================================\n";

    int arr[] = {10, 20, 30, 40, 50};

    int count1 = sizeof(arr) / sizeof(arr[0]);

    int count2 = end(arr) - begin(arr);

    cout << count1 << "\n"; // 5
    cout << count2 << "\n"; // 5

    return 0;
}
