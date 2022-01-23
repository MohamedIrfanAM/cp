// time-limit: 2000
// problem-url: https://codeforces.com/contest/1629/problem/C
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
  int n;
  cin >> n;
  vector<int> a(n);

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int pos = 0;
  vector<int> ans;
  while(pos < n)
  {
    int mex = 0;
    int max_mex = -1;
    vector<bool> used(n+1,false);
    for(int i = pos; i < n; i++)
    {
      used[a[i]] = true;
      while(used[mex])
      {
        mex++;
      }
      if( max_mex < mex)
      {
        max_mex = mex;
        pos = i;
      }
    }
    ans.push_back(max_mex);
    pos++;
  }

  cout << ans.size() << "\n";
  for(auto &x: ans)
  {
    cout << x << " ";
  }
  cout << "\n";
}

return 0;
}
