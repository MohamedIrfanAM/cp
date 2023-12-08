#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#define T 100
#define N 100000
#define P 1000000000

using namespace std;

int main()
{
  srand(time(0));

  int t = rand() % T + 1;
  cout << t << endl;
  while (t--)
  {
    int n = rand() % N + 1;
    cout << n << endl;

    for (int i = 0; i < n; i++)
    {
      int num = rand() % ((2 * P + 1) - P);
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}
