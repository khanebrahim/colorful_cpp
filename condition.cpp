#include <iostream>
using namespace std;
int main()
{
  int age;
  cout << "Enter your age" << endl;
  cin >> age;
  if (age < 12 || age > 50)
  {
    cout << "Eligible";
  }
  else
  {
    cout << "Not Eligible";
  }
  return 0;
}