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
  vector<vector<int>> pos(n+1);

  int zerocount = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    pos[a[i]].push_back(i+1);
    if( a[i] == 0)
    {
      zerocount++;
    }
  }
  if(zerocount == 0)
  {
    cout<< n <<"\n";
    for(int i =0; i< n; i++)
    {
      cout << 0 << " ";
    }
    cout << "\n";
    continue;
  }

  vector<int> ans;
  int max_pos = 0;
  for(int i = 0; i < n; i++)
  {
    if(pos[i].size() == 0)
    {
      ans.push_back(i);
      break;
    }
    else
    {
      if(pos[i][0] > max_pos)
      {
        max_pos = pos[i][0];
      }
    }
  }
  max_pos++;
  while(max_pos <= n)
  {
    int new_pos = max_pos;
    for(int i = 0 ; i <= n; i++)
    {
      auto it = lower_bound(pos[i].begin(),pos[i].end(),max_pos); 
      if( it != pos[i].end())
      {
        if(*it > new_pos)
        {
          new_pos = *it;
        }
      }
      else
      {
        ans.push_back(i);
        break;
      }
    }
    max_pos = new_pos+1;
  }

  cout << ans.size() << "\n";
  for(int &x : ans)
  {
    cout << x << " ";
  }
  cout << "\n";


}
return 0;
}
