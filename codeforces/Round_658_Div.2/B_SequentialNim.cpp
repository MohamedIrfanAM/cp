// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1382/B
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

  int onecount = 0;
  for(auto &x : v)
  {
    cin >> x;
    if(x == 1)onecount++;
  }

  if(onecount == n)
  {
    if(n%2 == 0)
    {
      cout << "Second\n";
    }
    else
    {
      cout << "First\n";
    }
    continue;
  }
  if( v[0] != 1)
  {
    cout << "First\n";
    continue;
  }
  onecount = 0;

  for(auto &i : v)
  {
    if ( i == 1)
    {
      onecount++;
    }
    else break;
  }

  if(onecount%2)
  {
    cout << "Second\n";
  }
  else
  {
    cout << "First\n";
  }
  
}

return 0;
}
