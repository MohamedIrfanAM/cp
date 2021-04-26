// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/445/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin >> n >> m;

char c[n+2][m+2];

for(int y = 0; y < n+2; y++ )
{
  for(int x = 0; x < m+2; x++)
  {
    c[y][x] = '0';
  }
}

for(int y = 1; y <= n; y++ )
{
  for(int x = 1; x <= m; x++)
  {
    cin >> c[y][x];
  }
}

for(int y = 1; y <= n; y++ )
{
  for(int x = 1; x <= m; x++)
  {
    if (c[y][x] == '.')
    {
      if(c[y+1][x] == 'B' || c[y-1][x] == 'B' || c[y][x+1] == 'B'|| c[y][x-1] == 'B')
      {
        c[y][x] = 'W';
      }
      else if(c[y+1][x] == 'W' || c[y-1][x] == 'W' || c[y][x+1] == 'W'|| c[y][x-1] == 'W')
      {
        c[y][x] = 'B';
      }
      else
      {
        c[y][x] = 'B';
      }
    }
    cout << c[y][x];
  }
  cout << "\n";
}




return 0;
}
