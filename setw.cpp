#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int a = 2, b = 25, c = 1500, sum;

  // manipulators
  // cout << "the value of without setw a: " << a << endl;
  // cout << "the value of without setw b: " << b << endl;
  // cout << "the value of without setw c: " << c << endl;

  // cout << "the value of a: " << setw(4) << a << endl;
  // cout << "the value of b: " << setw(4) << b << endl;
  // cout << "the value of c: " << setw(4) << c << endl;


  // operator precidenc

  sum = (((a*2)+b)-45)+10;

  cout << sum;


  return 0;
}