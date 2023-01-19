// time-limit: 1000
// problem-url: https://www.codechef.com/START74D/problems/BAB_I
#include <algorithm>
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

  for(auto &a: v)
  {
    cin >> a;
  }
  
  int nmax = -1*(INT_MAX);
  int pmin = INT_MAX;

  for(int i = 0; i < n; i++)
  {
    if(v[i] < 0)
    {
      if(v[i] > nmax)
      {
        nmax = v[i];
      }
    }
    else
    {
      if(v[i] < pmin)
      {
        pmin = v[i];
      }
    }
  }

  if(pmin == 0 && nmax == -1)
  {
    cout << "-1\n";
  }
  else
  {
    cout << min(abs(nmax),abs(pmin))-1 << "\n";
  }
}

return 0;
}
