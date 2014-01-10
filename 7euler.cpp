#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
  if(n % 2 == 0)
  {
    return false;
  }

  int bound = ceil(sqrt(n));

  for(int i = 3; i <= bound; i += 2)
  {
    if(n % i == 0)
      return false;
  }

  return true;
}

int main()
{
  int NUM = 10001;
  int count = 1;
  int prime = 2;

  for(int i = 0; count <= NUM; i++)
  {
    if(isPrime(i))
    {
      count++;
      prime = i;
    }
  }

  cout << prime << endl;

}
