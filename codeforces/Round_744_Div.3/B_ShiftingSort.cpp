// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1579/B
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
  cin>> n;
  vector<int> v(n);
  vector<int> s(n);

  for(int i = 0; i< n; i++)
  {
    cin >> v[i];
    s[i]=v[i];
  }
  sort(s.begin(),s.end());

  vector<vector<int>> ans;
  for(int i =0; i < n; i++)
  {
    if( s[i] != v[i])
    {

      int l = i+1,r = i+1,d;

      for(int j = l; j < n; j++)
      {
        if(v[j] == s[i])
        {
          r = j+1;
          break;
        }
      }
      d = r-l;
      for(int j = r-1;j >= l; j--)
      {
        swap(v[j],v[j-1]);
      }
      ans.push_back({l,r,d});

    }
  }

  cout << ans.size() << "\n";
  for( auto &i: ans)
  {
    cout << i[0] << " " << i[1] << " " << i[2] << "\n";
  }
}

return 0;
}
