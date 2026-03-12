#include <iostream>
using namespace std;
int main()
{
  cout << "|===================================|\n";
  cout << "|==calculate your age applicathion==|\n";
  cout << "|===================================|\n";

  int age;
  cin >> age;
  int age_in_days = 365 * 24;
  int age_in_hours = age_in_days * 24;
  int age_in_mine = age_in_hours * 60;
  int age_in_scund = age_in_mine * 60 * 60;

  cout << " Age in Days Is: " << age_in_days << " Days \n";
  cout << " Age in Hours Is: " << age_in_hours << " Hours \n";
  cout << " Age in Mine Is: " << age_in_mine << " Mine \n";
  cout << " Age in Scund Is: " << age_in_scund << " Scund \n";

  return 0;
}

//  #include<iostream>
//  using namespace std;
//   int main(){
//        int curent_years;
//        int birth_years;

//        curent_years=2026;
//        birth_years=2006;
//        int age_in_years=curent_years-birth_years;
//        cout << age_in_years;
//     }
