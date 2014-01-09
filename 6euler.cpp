#include <iostream>
using namespace std;

int main()
{
  const int NUM = 100;
  int sum = 0;
  int squares = 0;
  for(int i = 1; i <= NUM; ++i)
  {
    sum += i;
    squares += (i*i);
  }
  cout << (sum*sum) - squares << endl;
  return 0;
}
