#include <iostream>
using namespace std;

int main()
{
  int age;
  cin >> age;
  switch (age)
  {
  case 18:
    cout << "you are 18 only";
    break;
  case 10:
    cout << "you are 10 only";
    break;
  case 5:
    cout << "you are 5 only";
    break;

  default:
    cout << "you can enter";
    break;
  }
  return 0;
}