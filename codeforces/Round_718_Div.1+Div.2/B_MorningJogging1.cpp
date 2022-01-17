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
  set<vector<long long>> d;

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < m; j++)
    {
      long long x;
      cin >> x;
      v[i].push_back(x);
      d.insert({x,i,j});
    }
  }

  auto it = d.begin();

  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(it != d.end())
      {
        if( j == (*it)[1])
        {
          if((*it)[1] < n && (*it)[2] < m)
          {
            int min_row = (*it)[1];
            int min_col = (*it)[2];
            long long temp = v[j][i];
            v[j][i] = (*it)[0];
            v[min_row][min_col] = temp;


            auto pos = d.find({temp,j,i});
            if(pos != d.end())
            {
              d.erase(pos);
              d.insert({temp,min_row,min_col});
            }
            it++;
            break;
          }
        }
      }
    }
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
