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
      d.push_back({x,i,j});
    }
  }

  sort(d.begin(),d.end());

  int count_no = 0;
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
        if( j == d[count_no][1])
        {
            int min_row = d[count_no][1];
            int min_col = d[count_no][2];
            long long temp = v[j][i];
            v[j][i] = d[count_no][0];
            v[min_row][min_col] = temp;

            d.push_back({temp,min_row,min_col});
            sort(d.begin(),d.end());

            count_no++;
            break;
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
