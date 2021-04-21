// time-limit: 2000
// problem-url: https://codeforces.com/contest/1512/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t ;
cin >>t;
int m;

while(t--)
{

int xx  = 0;
int yy = 0;
int temx = 0;
int temy = 0;

  cin >> m;
  char box[m][m];

  for(int y = 0; y <m; y++)
  {
    for(int x= 0 ; x <  m; x++)
    {
      cin >> box[y][x];
      if(box[y][x] == '*')
      {
        if(xx == 0 && yy == 0 )
        {
          xx = x;
          yy = y;
        }
        else
        {
          temx = x;
          temy = y;
        }
      }
    }
  }
  box[temy][xx] = '*';
  box[yy][temx] = '*';
  if(yy == temy && yy != m-1)
  {
    box[yy+1][temx] = '*';
    box[temy+1][xx] = '*';
  }
  else if (yy == temy && yy != 0)
  {
    box[yy-1][temx] = '*';
    box[temy-1][xx] = '*';
  }
  
  if(xx == temx && xx != m-1)
  {
    box[yy][temx+1] = '*';
    box[temy][xx+1] = '*';
  }
  else if(xx == temx && xx != 0)
  {
    box[yy][temx-1] = '*';
    box[temy][xx-1] = '*';
  }

  for(int y = 0; y <m; y++)
  {
    for(int x= 0 ; x <  m; x++)
    {
      cout << box[y][x];
    }
      cout << "\n";
  }

}

return 0;
}
