// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1375/A
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
  for(auto &x: v)
  {
    cin >> x;
  }

  for(int i = 0; i < n; i++)
  {
    if(i%2)
    {
      if( v[i] > 0)
      {
        v[i] *= -1;
      }
    }
    else
    {
      if(v[i] < 0)
      {
        v[i] *= -1;
      }
    }
  }

  for(auto &x : v)
  {
    cout << x << " ";
  }
  cout << "\n";
}

return 0;
}
