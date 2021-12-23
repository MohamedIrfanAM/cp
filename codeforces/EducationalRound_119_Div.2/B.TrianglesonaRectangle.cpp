// time-limit: 2000
// problem-url: https://codeforces.com/contest/1620/problem/B
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
  int w,h;
  cin >> w >> h;

  vector<vector<int>> v(4);

  for(int i = 0; i < 4; i++)
  {
    int k;
    cin >> k;
    for(int j = 0; j < k;j++)
    {
      int x;
      cin >> x; 
      v[i].push_back(x);
    }
  }
  vector<long long int> areas;

  long long  area;
  area = 1LL * h * (v[0].back() - v[0].front());
  areas.push_back(area);
  area = 1LL * h * (v[1].back() - v[1].front());
  areas.push_back(area);
  area = 1LL * w * (v[2].back() - v[2].front());
  areas.push_back(area);
  area = 1LL* w * (v[3].back() - v[3].front());
  areas.push_back(area);

  long long ans = *max_element(areas.begin(),areas.end()) ;
  cout << ans << "\n";
}



return 0;
}
