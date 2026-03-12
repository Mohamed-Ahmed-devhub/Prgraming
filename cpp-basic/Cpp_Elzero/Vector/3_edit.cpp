#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums ={10, 20, 30, 40};
    cout << nums.at(3) << "\n";
    nums.push_back(70); //add
    cout << nums.size( ) << "\n"; //5 
    cout << nums.at(4) << "\n"; //70 
    nums.at(4)=100; //update
    cout << nums.at(4) << "\n"; //100
    nums.push_back(600);
    cout << nums.size() << "\n";//6   <<<<<
    cout << nums.at(5) << "\n";
    nums.pop_back(); //deleat
    cout << nums.size() << "\n"; //5  <<<<<

    return 0;
}