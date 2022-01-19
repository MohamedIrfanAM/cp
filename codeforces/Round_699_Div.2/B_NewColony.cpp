// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1481/B
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
  int n,k;
  cin >> n >> k;
  
  vector<int> v(n);
  
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  if(v.size() == 1)
  {
    cout << "-1\n";
    continue;
  }
  int pos = 0;
  bool final = false;
  for(int j = 0; j < k; j++)
  {
    for(int i = 1; i < n;i++)
    {
      if(v[i] > v[i-1])
      {
        v[i-1]++;
        pos = i;
        break;
      }
      if( i == n-1)
      {
        final = true;
      }
    }
    if( final ) break;
  }

  if(final)
  {
    cout << "-1\n";
  }
  else
  {
    cout << pos << "\n";
  }
}

return 0;
}
