#include <iostream>
#include <cstdlib>
using namespace std;

int reverse(int num)
{
  string num_string = to_string(num);
  string reversed_string = string(num_string.rbegin(), num_string.rend());
  return atoi(reversed_string.c_str());
}

bool isPalindrome(int num)
{
  return (num == reverse(num));
}

int main()
{
  int max = 0;
  for(int i = 999; i > 99; --i)
  {
    for(int j = 999; j > 99; --j)
    {
      int product = i*j;
      if(isPalindrome(product) && product > max)
      {
        max = product;
      }
    }
  }
  cout << max << endl;
}
