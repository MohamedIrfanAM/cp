// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1575/A
#include<bits/stdc++.h>

using namespace std;

bool compare(pair<string,int> &a ,pair<string,int> &b)
{
  int m = a.first.length();

  if( a.first != b.first)
  {
    for(int i = 0; i < m; i++)
    {
      if(a.first[i] != b.first[i])
      {
        if( i%2 == 0)
        {
          return a < b;
        }
        else
        {
          return a > b;
        }
      }
    }
  }
  else
  {
    return false ;
  }
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst = 1;
// cin >> tst;
while(tst--)
{
  int n,m;
  cin >> n >> m;
  vector<pair<string,int>> v(n);
  for(int i = 0; i < n;i++)
  {
    cin >> v[i].first;
    v[i].second = i+1;
  }

  sort(v.begin(),v.end(),compare);

  for( auto &s : v)
  {
    cout << s.second << " ";
  }
  cout << "\n";
}

return 0;
}
