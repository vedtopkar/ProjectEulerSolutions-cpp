#include <iostream>

using namespace std;

int main()
{
  double answer;
  for(int i = 0; i < 1000; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
    {
      answer += i;
    }
  }

  cout << answer << endl;

  return 0;
}
