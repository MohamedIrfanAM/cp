// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1413/B
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
  map<int,vector<int>> rows;
  for(int i = 0; i < n; i++)
  {
    int x; 
    cin >> x;
    rows[x].push_back(x);
    for(int j = 1 ; j < m; j++)
    {
      int x1;
      cin >> x1;
      rows[x].push_back(x1);
    }
  }

  vector<vector<int>> ans;
  for(int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    if(rows[x].size() == 0)
    {
      for(int j = 1; j < n; j++)
      {
        cin >> x;  
      }
    }
    else
    {
      ans.push_back(rows[x]);
      for(int j = 1; j < n; j++)
      {
        cin >> x;
        ans.push_back(rows[x]);
      }
    }
  }

  for(auto &I: ans)
  {
    for(auto &J : I)
    {
      cout << J << " ";
    }
    cout << "\n";
  }
  

}

return 0;
}
