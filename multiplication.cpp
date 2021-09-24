#include <iostream>
using namespace std;
int main()
{
  int n, i;
  cout << "Enter a number: ";
  cin >> n;
  for (i = 1; i <= 10; i++)
  {
    cout << n << "x" << i << "=" << i * n;
    cout << endl;
  }
  return 0;
}