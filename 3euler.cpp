#include <iostream>

using namespace std;

int maxFactor(long long n)
{
  int max = -1;
  int d = 2;
  while(d*d <= n)
  {
    if(n % d == 0)
    {
      if(d > max)
      {
        max = d;
      }
      n /= d;
      cout << d << " is a factor. Now we test " << n << endl;
    }
    else 
    {
      ++d;
    }
  }

  if(n > max)
  {
    max = n;
  }
  return max;
}

int main()
{
  cout << maxFactor(600851475143LL) << endl;
  return 0;
}
