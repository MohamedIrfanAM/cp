// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1517/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;

while(t--)
{
  int n,m;
  cin >> n >> m;
  int r[n][m];
  
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      cin >> r[i][j];
    }
    if(i%2 == 0)
    {
      sort(r[i],r[i]+m);
    }
    else
    {
      sort(r[i],r[i]+m);
      reverse(r[i],r[i]+m);
    }
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      cout << r[i][j]; 
      if(j != m-1)
      {
        cout << " ";
      }
    }
    cout << "\n";
  }
}



return 0;
}
