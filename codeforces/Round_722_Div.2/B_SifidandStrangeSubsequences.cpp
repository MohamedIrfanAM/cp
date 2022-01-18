// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1529/B
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
  vector<int> v;
  vector<int> d;
  int zcount = 0;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if(x <= 0) v.push_back(x);
    else d.push_back(x);
    if( x == 0) zcount++;
  }

  if(v.size() == 0)
  {
    cout << "1\n";
    continue;
  }
  else if(v.size() == 1 && d.size() >= 1)
  {
    cout << "2\n";
    continue;
  }
  else if(v.size() == 1)
  {
    cout << "1\n";
    continue;
  }

  sort(v.begin(),v.end());
  sort(d.begin(),d.end());
  int minval = INT_MAX;

  for(int i =1 ; i < v.size(); i++)
  {
    minval = min(minval,(abs(v[i] - v[i-1])));
  }

  bool ok = false;
  if(zcount < 2)
  {
    for(int i : d)
    {
      if( i <= minval)
      {
        ok = true;
        break;
      }
    }
  }

  if(ok)
  {
    cout << v.size()+1 << "\n";
  }
  else
  {
    cout << v.size() << "\n";
  }
}

return 0;
}
