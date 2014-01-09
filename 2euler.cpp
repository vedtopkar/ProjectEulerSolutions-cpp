#include <iostream>

using namespace std;

int main()
{
  int sum = 0;
  int fib1 = 0;
  int fib2 = 1;
  int tmp;
  while(fib2 <= 4000000)
  {
    if(fib2 %2 == 0)
    {
      sum += fib2;
    }
    tmp = fib1 + fib2;
    fib1 = fib2;
    fib2 = tmp;
  }
  cout <<fixed<< sum << endl;
  return 0;
}
