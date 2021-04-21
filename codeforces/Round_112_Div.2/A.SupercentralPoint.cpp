// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/165/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
int c[n][2];

for ( int i= 0; i < n; i++ )
{
  cin >> c[i][0] >> c[i][1]; 
}
  int supsup =0;

for ( int i= 0; i < n; i++ )
{
  int sup = 0;
  bool u = false;
  bool d = false;
  bool r = false;
  bool l = false;

  for(int j = i+1; j < n; j++)
  {
    cout << c[i][0]  <<  c[j][0] << c[i][1] << c[j][1] << "\n";
    if(c[i][0] > c[j][0] && !l)
    {
      sup++;
      l = true;
    }
    else if(c[i][0] < c[j][0] && !r)
    {
      sup++;
      r = true;
      /* cout << c[i][0] << c[i][1] << c[j][0] << c[j][1] << "\n"; */
    }
    else if(c[i][1] < c[j][1] && !d)
    {
      sup++;
      d = true;
      /* cout << c[i][0] << c[i][1] << c[j][0] << c[j][1] << "\n"; */
    }
    else if(c[i][1] > c[j][1] && !u)
    {
      sup++;
      d = true;
      /* cout << c[i][0] << c[i][1] << c[j][0] << c[j][1] << "\n"; */
    }
    if(sup == 4)
    {
      supsup++;
    }
  }
}
/* cout << supsup; */

return 0;
}
