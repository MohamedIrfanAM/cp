// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/275/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


bool toggle(bool s);

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

bool gridstate[3][3];

for (int i = 0; i < 3; i ++)
{
  for( int j =0; j < 3; j++ )
  {
    gridstate[i][j] = 1;
  }
}

int grid[3][3];

for ( int i = 0; i < 3 ; i++ )
{
  for ( int j = 0; j < 3; j++ )
  {
    cin >> grid[i][j];
  }
}

for (int i = 0; i < 3; i++)
{
  for (int j = 0; j < 3; j ++)
  {
    if (grid[i][j]%2 == 1)
    {
      gridstate[i][j] = toggle(gridstate[i][j]);
      if(i-1 >= 0)
      {
      gridstate[i-1][j] = toggle(gridstate[i-1][j]);
      }
      if(i+1 <= 2)
      {
      gridstate[i+1][j] = toggle(gridstate[i+1][j]);
      }
      if(j-1 >= 0)
      {
      gridstate[i][j-1] = toggle(gridstate[i][j-1]);
      }
      if(j+1 <= 2)
      {
      gridstate[i][j+1] = toggle(gridstate[i][j+1]);
      }
      /* if(j-1 >= 0 && i-1 >= 0 ) */
      /* { */
      /* gridstate[i-1][j-1] = toggle(gridstate[i-1][j-1]); */
      /* } */
      /* if(j+1 <= 2 && i+1 <= 2 ) */
      /* { */
      /* gridstate[i+1][j+1] = toggle(gridstate[i+1][j+1]); */
      /* } */
    }
 }
}


for ( int i = 0; i < 3 ; i ++ )
{
  for( int k = 0; k < 3 ; k++)
  {
    cout << gridstate[i][k];
  }
  cout << "\n";
}
return 0;
}

bool toggle(bool s)
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

