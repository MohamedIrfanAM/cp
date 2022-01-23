// time-limit: 1000
// problem-url: https://codeforces.com/contest/1629/problem/A
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
  int n,k;
  cin >> n >> k;
  vector<pair<int,int>> v(n);

  for(int i = 0; i < n; i++)
  {
    cin >> v[i].first; 
  }
  for(int i = 0; i < n; i++)
  {
    cin >> v[i].second;
  }

  sort(v.begin(),v.end());

  int ans = k;
  for(int i = 0; i< n ; i++)
  {
    if(v[i].first <= ans)
    {
      ans += v[i].second;
    }
  }
  cout << ans << "\n";
}

return 0;
}
