// time-limit: 1000
// problem-url: https://codeforces.com/contest/1450/problem/B
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
  int n, k;
  cin >> n >> k;

  if(n == 1)
  {
    cout << "0\n";
    continue;
  }

  vector<pair<int,int>> v(n);

  for(int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
  }
  

  bool found = false;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      int d = abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
      if(d > k)
      {
        break;
      }
      else if( j == n-1 )
      {
        found = true;
        break;
      }
      if(found)
      {
        break;
      }
    }
  }
    if(found)
    {
      cout << "1\n";
    }
    else
    {
      cout << "-1\n";
    }
  

}



return 0;
}
