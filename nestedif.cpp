#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter 3 numbers:";
  cin >> a >> b >> c;
  if (a > b && a > c)
  {
    cout << "a bigger than b and c :" << a;
  }
  else if (b > c)
  {
    cout << "b bigger than c:" << b;
  }
  else
  {
    cout << "c bigger than others: " << c;
  }
  return 0;
}