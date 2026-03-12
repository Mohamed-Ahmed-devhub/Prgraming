#include<iostream>
// #include<cmath>
using namespace std;
int main()
{ 
  double M1, M2, d,k=6.67e-8, f; 
    cout << "Enter the masses of the first and second body M1 M2 in grams: \n";
    cin >> M1 >> M2;
    cout << "Enter the distance between the bodies d in cm: \n";
    cin >> d;
    f = k * M1 * M2 / (d * d);
    cout << "The force Is :" << f << " dyn " <<"\n";           


    return 0;
}