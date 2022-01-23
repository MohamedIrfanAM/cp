// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1365/A
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
  int n,m;
  cin >> n >> m;
  int arr[n][m];
  vector<bool> rows_used(n);
  vector<bool> coloumn_used(m);

  for(int i = 0; i < n ; i++)
  {
    for(int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
      if( arr[i][j] == 1)
      {
        rows_used[i] = true;
        coloumn_used[j] = true;
      }
    }
  }
  int count = 0;
  for(int i = 0; i < n; i++)
  {
    if(!rows_used[i])
    {
      for(int j = 0; j < m; j++)
      {
        if(!coloumn_used[j])
        {
          count++;
          rows_used[i] = true;
          coloumn_used[j] = true;
          break;
        }
      }

    }
  }

  if( count&1) cout << "Ashish\n";
  else cout << "Vivek\n";
}

return 0;
}
