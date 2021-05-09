#include<iostream>
using namespace std;

int main()
{
  long long sum = 0;
  bool done[100000];
  for (int i = 0; i < 100000; ++i) {
    done[i] = 0; 
  }

  for(int i = 1; i <= 10000; i++)
  {
    long long sum2 = 0;
    long long sum1 = 0;

    for(int j = 1; j <= i/2; j++ )
    {
      if(i%j == 0)
      {
        sum1 += j;
      }
    }
    for(int j = 1; j <= sum1/2; j++)
    {
      if(sum1%j == 0)
      {
        sum2 += j;
      }
    }
    if(sum2 == i)
    {
      if(done[i+sum1] != 1 && sum1 != i)
      {
      sum += (i+sum1);
      done[i+sum1] = 1;
      cout << i << " " << sum1 << "  Total = "<< sum << "\n";
      }
    }
  }
}
