// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/275/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int toggle(int s);

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int grid[3][3];

for (int i = 0; i < 3; i ++)
{
  for( int j =0; j < 3; j++ )
  {
    grid[i][j] = 1;
  }
}

for ( int i = 0; i < 3 ; i++ )
{
  for ( int j = 0; j < 3; j++ )
  {
    int initial = grid[i][j];
    cin >> grid[i][j];

    if (grid[i][j]%2)
    {
      grid[i][j] = toggle(initial);
      if(i-1 >= 0)
      {
      grid[i-1][j] = toggle(grid[i-1][j]);
      }
      if(i+1 <= 2)
      {
      grid[i+1][j] = toggle(grid[i+1][j]);
      }
      if(j-1 >= 0)
      {
      grid[i][j-1] = toggle(grid[i][j-1]);
      }
      if(j+1 <= 2)
      {
      grid[i][j+1] = toggle(grid[i][j+1]);
      }
    }
    else
    {
      grid[i][j] = initial;
    }
  }
}

for ( int i = 0; i < 3 ; i ++ )
{
  for( int k = 0; k < 3 ; k++)
  {
    cout << grid[i][k];
  }
  cout << "\n";
}
return 0;
}

int toggle(int s)
{
  if (s == 0)
  {
    s = 1;
  }
  else if ( s == 1)
  {
    s = 0;
  }
  return s;
}

