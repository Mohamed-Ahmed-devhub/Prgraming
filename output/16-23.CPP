#include<iostream>
#include<limits.h>
   using namespace std;
   int main(){ 
    double salary = 5000.98;

  cout << sizeof( salary ) << "\n";// 8 Bytes
  cout << sizeof( salary )*8 << "\n";// 64 Bits
  
  cout <<"\n========================================================================================\n";
  
cout << "Maximum Integer Number Is =>" << INT_MAX << endl;
cout << "Minimum Integer Number Is=>" <<  INT_MIN << endl; 
cout << "Maximum Short Integer Number =>" << SHRT_MAX << endl;
cout << "Minimum Short Integer Number Is =>"<< SHRT_MIN << endl;
  
cout <<"\n========================================================================================\n";

// Edit Line To Make 8 Become 4
cout << sizeof (int (10.5 + 5 + 20.5 + 10)) << "\n"; // 8

cout <<"\n========================================================================================\n";

cout << "ASCII Value of ~ Is => " << int('~') << "\n";
cout << "ASCII Value of & Is =>" << int('&') << "\n";                        
cout << "ASCII Value of % Is => " << int('%') << "\n";        
cout <<"ASCII Value of A Is =>"<< int('A')  << "\n";

cout << "\n========================================================================================\n";

    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    cout << "Character Of This ASCII Value 69 Is " << char(a) << "\n";
    cout << "Character Of This ASCII Value 108 Is " << char(b) << "\n";
    cout << "Character Of This ASCII Value 122 Is " << char(c) << "\n";
    cout << "Character Of This ASCII Value 101 Is " << char(d) << "\n";
    cout << "Character Of This ASCII Value 114 Is " << char(e) << "\n";
    cout << "Character Of This ASCII Value 111 Is " << char(f) << "\n";

    cout << "Elzero";

 cout << "\n==========================================================================================\n";
 
int g = 1;
int h = 13;
int i = 17;
int j = 70;
 
 cout << char (j-g) ;                                                                                                        // Output Needed
 cout << char(j+i) ;                                                                                                       // "EWS"
 cout << char(j+h) ; 
  
 cout << "\n==========================================================================================\n";
 
 // Edit Anything Except Values
short int z = 100;
long long int q = 15001500;
long double l = 100.54565746;

// Do Not Edit
cout << sizeof(z) << " Bytes\n"; // 2 Bytes
cout << sizeof(q) << " Bytes\n"; // 8 Bytes
cout << sizeof(l) << " Bytes\n"; // 16 Bytes
 
 cout << "\n==========================================================================================\n";
 
 // Edit Anything Except Values
unsigned int A = 100;
signed int B = -100;
short C = 100;
double D = 500.55;

// Do Not Edit
cout << A << "\n"; // 100
cout << B << "\n"; // -100
cout << C << "\n"; // 100
cout << D << "\n"; // 500.55
 
 cout << "\n==========================================================================================\n";
 
 // Add Type Alias Here
using lli = long long int;
// Do Not Edit
lli num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005
 
 cout << "\n==========================================================================================\n";

 // Do Not Edit Here
short int Q = 100;
float W = 98.5f;
double E = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout << int(Q + W + E)  << "\n"; // 200
cout << static_cast<int> (Q + W + E) << "\n"; // 200
 
 cout << "\n==========================================================================================\n";
 cout << "\n========================================XXXXXXX===========================================\n";
 cout << "\n==========================================================================================\n";

//        // Do Not Edit Here
short O = 1000;
int P = 10000;
long double K = 5.560000505012;

// // Change ??? To Something Else To Get The Output
// cout << ??? - ??? << "\n"; // 12
// cout << ??? + ??? << "\n"; // 20
// cout << ??? * ??? << "\n"; // 32
// cout << ??? * ??? << "\n"; // 5000
// cout << char(??? * ???) << "\n"; // P

     cout << int(K) - -7 << "\n";                                // 12
    cout << int(O)/100+ int(O)/100 << "\n";                     // 20
    cout << int(O)/31 * 1 << "\n";                             // 32
    cout << O * 5 << "\n";                                    // 5000
    cout << char(P / 125) << "\n";                           // P
 
 return 0;

}
