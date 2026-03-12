#include<iostream>
  using namespace std;
   int main()
 {
   int kilobytes,
       bytes,
       bits;
cout << "Enter number of kilobytes: ";

 cin >> kilobytes;
bytes =  kilobytes*1024 ;
bits = bytes*8 ;

cout << " kilobytes is: " <<  kilobytes << "\n";
cout << " bytes is: " << bytes << "\n";
cout << " bits is: " <<  bits << "\n";   
  
return 0;

}

// #include <iostream>
// using namespace std;

// // Convert Kilobytes to Bytes and Bits
// int main()
// {
//     long long kilobytes, bytes, bits;

//     const int BYTES_IN_KB = 1024;
//     const int BITS_IN_BYTE = 8;

//     cout << "Enter number of kilobytes: ";
//     cin >> kilobytes;

//     if (kilobytes < 0)
//     {
//         cout << "Please enter a positive number\n";
//         return 0;
//     }

//     bytes = kilobytes * BYTES_IN_KB;
//     bits  = bytes * BITS_IN_BYTE;

//     cout << "Kilobytes: " << kilobytes << "\n";
//     cout << "Bytes: " << bytes << "\n";
//     cout << "Bits: " << bits << "\n";

//     return 0;
// }
