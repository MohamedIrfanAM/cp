// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1546/B
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
  vector<string> aft(n-1);
  vector<string> orig(n);
  for(auto &x : orig)
  {
    cin >> x;
  }
  for(auto &x : aft)
  {
    cin >> x;
  }
  sort(aft.begin(),aft.end());
  sort(orig.begin(),orig.end());

  for(int i = 0; i < n; i++)
  {
    if(i < n-1)
    {
      int matchfound = false;
      for(int j = 0; j < m; j++)
      {
        if(orig[i][j] == aft[i][j])
        {
          matchfound = true;
          break;
        }
      }
      if(!matchfound)
      {
        cout << orig[i] << endl;
        cout << flush;
        break;
      }
    }
    else
    {
      cout << orig[i] << endl;
      cout << flush;
      break;
    }
  }
}

return 0;
}
