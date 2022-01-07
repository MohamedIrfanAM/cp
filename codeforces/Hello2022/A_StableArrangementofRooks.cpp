// time-limit: 1000
// problem-url: https://codeforces.com/contest/1621/problem/0
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n,k;
  cin >> n >> k;
  int max;
  if( n%2 == 0)
  {
    if( k > n/2)
    {
      cout << "-1\n";
      continue;
    }
  }
  else
  {
    if(2*k > n+1)
    {
      cout << "-1\n";
      continue;
    }
  }


  int c = 0;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if( i == j && i%2 == 0 && c < k)
      {
        cout << "R";
        c++;
      }
      else
      {
        cout << ".";
      }
    }
    cout << "\n";
  }
}



return 0;
}
