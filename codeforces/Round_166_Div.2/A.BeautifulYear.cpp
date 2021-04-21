// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int year;
int dyear = 0;
cin >> year;

for (int i = year + 1; i > year; i++)
{
  string y = to_string(i);

  int t = 0;
  for(int j = 0; j < 4 ; j++)
  {
    for ( int k = j+1; k < 4; k++ )
    {
      if (y[j] != y[k])
      {
        t += 1;
      }
      else if (y[j]==y[k])
      {
        break;
      }
    }
  }
  if(t == 6)
  {
    dyear = i;
    break;
  }
}
    cout << dyear;

return 0;
}
