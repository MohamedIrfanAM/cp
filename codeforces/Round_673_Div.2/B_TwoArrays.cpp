// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1417/B
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
  int n,t;
  cin >> n >> t;
  vector <int> v(n);
  for(auto &x : v)
  {
    cin >> x;
  }
  map<int,bool> used;
  vector<int> ans(n);

  for(int i= 0; i< n; i++)
  {
    if(!used[v[i]])
    {
      used[t-v[i]] = true;
      ans[i] = 0;
    }
    else
    {
      used[t-v[i]] = false;
      ans[i] = 1;
    }
  }

  for(auto &x : ans)
  {
    cout << x  << " ";
  }
  cout << "\n";
}

return 0;
}
