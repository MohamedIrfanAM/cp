// time-limit: 2000
// problem-url: https://codeforces.com/contest/1520/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t ;
cin >> t;
while(t--)
{
  long long n;
  cin >> n;
  int c = 0;
  for(int i = 0; i <= 8; i++)
  {
    int num = 0;
    for(int k = 0; k <= i; k++)
    {
      num += pow(10,k);
    }
    for(int j = 1; j <= 9; j++ )
    {
      if(num*j <= n)
      {
        c++;
      }
      else if( num*j > n )
      {
        break;
      }
    }
  }
  cout << c << "\n";
}

return 0;
}
