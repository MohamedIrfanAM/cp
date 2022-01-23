// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1370/B
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
  vector<int> v(2*n);
  for(int i = 0; i < 2*n; i++)
  {
    cin >> v[i]; 
  }

  vector<pair<int,int>> ans;
  map <int,bool> used ;
  bool finised = false;
  for(int i = 0; i < 2*n;i++)
  {
    if(!used[i])
    {
      for(int j = 0; j < 2*n; j++)
      {
        if( j != i && v[i]&1 && v[j]&1 && !used[j])
        {
          ans.push_back({i+1,j+1});
          used[i] = true;
          used[j] = true;
          break;
        }
        if( j != i && !(v[i]&1) && !(v[j]&1) && !used[j])
        {
          ans.push_back({i+1,j+1});
          used[i] = true;
          used[j] = true;
          break;
        }
      }
    }
    if( ans.size() == n-1)
    {
      break;
    }
  }

  for(auto &p : ans)
  {
    cout << p.first << " " << p.second << '\n';
  }
}

return 0;
}
