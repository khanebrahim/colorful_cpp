#include <iostream>
using namespace std;
int main()
{
  int n, i, sum = 0;
  cout << "Enter a number : ";
  cin >> n;
  for (i = i; i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }
  if (2 * n == sum)
  {
    cout << "perfect number";
  }
  else
  {
    cout << " not perfect number:";
  }

  return 0;
}