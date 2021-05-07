#include<iostream>
using namespace std;

int main()
{
  long long sumdigits = 0;
  long long squaresum = 0;
  for(int i = 1 ; i <= 100; i++)
  {
    sumdigits += i;
    squaresum += i*i;
  }
  long long sumsquare = sumdigits*sumdigits;
  cout << sumsquare - squaresum;
}
