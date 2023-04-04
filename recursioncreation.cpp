#include<iostream>
using namespace std;
//recursive function for factorialsq
int fac(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
    return n = n * fac(n - 1);
}
int main()
{
  int n;
  cout << "enter the number:" << endl;
  cin >> n;
  // factorial calculation of number
  int ans = fac(n);
  cout << "the factorial of the number " << n << " is:" << ans << endl;
}