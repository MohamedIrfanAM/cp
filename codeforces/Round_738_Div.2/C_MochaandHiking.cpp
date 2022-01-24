// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1559/C
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
  vector<int> v(n);
  for(auto &x : v)
  {
    cin >> x;
  }

  if(v[n-1] == 0)
  {
    for(int i = 1; i <= n+1; i++)
    {
      cout << i << " ";
    }
    cout << "\n";
    continue;
  }
  else if(v[0] == 1)
  {
    cout << n+1 << " ";
    for(int i = 1; i <= n; i++)
    {
      cout << i << " ";
    }
    cout << "\n";
    continue;
  }

  bool done = false;
  for(int i = 0; i+1 <= n; i++)
  {
    if(v[i] == 0 && v[i+1] == 1&&!done)
    {
      cout << i+1 << " " << n+1 << " ";
      done = true;
    }
    else
    {
      cout << i+1 << " ";
    }
  }
  cout << "\n";
}

return 0;
}
