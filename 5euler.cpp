#include <iostream>
using namespace std;

int main()
{
  int i = 20;
  while(true)
  {
    bool divisible = true;
    for(int j = 20; j > 0; --j)
    {
      if(i % j != 0)
      {
        divisible = false;
        break;
      }
    }
    if(divisible)
    {
      cout << i << endl;
      return 0;
    }
    ++i;
  }
}
