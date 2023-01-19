// time-limit: 1000
// problem-url: https://www.codechef.com/START74D/problems/FACEBOOK
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
  
  vector<pair<int,int>>a;
  vector<int> b;


  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    a.push_back({x,i});
  }

  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    b.push_back(x);
  }

  sort(a.begin(),a.end());
  int max = a.back().first;

  vector<int> maxis;

  for(int i = 0; i < n; i++)
  {
    if(a[i].first == max)
    {
      maxis.push_back(a[i].second);
    }
  }

  int maxc = -1;
  int ans = -1;
  for(int i : maxis)
  {
    if(b[i]> maxc)
    {
      ans = i;
      maxc = b[i];
    }
  }

  cout << ans+1 << "\n";
}

return 0;
}
