// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1517/B
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
  long long n,m;
  cin >> n >> m;

  vector<vector<int>> v(n);
  vector<vector<long long int>> d;

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      long long x;
      cin >> x;
      v[i].push_back(x);
    }
    sort(v[i].begin(),v[i].end());
    for(int j = 0; j < m; j++)
    {
      d.push_back({v[i][j],i,j});
    }

  }

  sort(d.begin(),d.end());

  for(int k = m-1; k >= 0; k--)
  {
    int i = d[k][1];
    int j = d[k][2];
    swap(v[i][j],v[i][k]);
  }

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      cout << v[i][j] << " ";
    }
    cout << "\n";
  }

}
return 0;
}
