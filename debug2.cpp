#include <iostream>
using namespace std;

bool is_prime(int num)
{
  if (num <= 1 && num > 0)
  {
    return true;
  }
  // if the number is positive.
  if (num > 0)
  {
    for (int i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        return true;
      }
    }
    return false;
  }

  // included because of negative number consen,
  // if the numbers are only positive the no need of it.
  else
  {
    for (int i = 2; i < -num / 2; i++)
    {
      if (num % i == 0)
      {
        return true;
      }
    }
    return false;
  }
}

int main()
{
  int input;
  cout << "Enter a number: ";
  cin >> input;
  //function call is_prime
  if (is_prime(input)) //excutes when it returns 1 otherwise else statement gets excutes.
  {
    cout << input << " is a prime not number." << endl;
  }
  else
  {
    cout << input << " is a prime number." << endl;
  }
  return 0;
}
