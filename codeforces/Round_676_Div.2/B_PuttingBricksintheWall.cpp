// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1421/B
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
  vector<string> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int a = v[0][1]-48;
  int b = v[1][0]-48;
  int c = v[n-2][n-1]-48;
  int d = v[n-1][n-2]-48;

  vector<pair<int,pair<int,int>>> p;
  p = {{a,{1,2}},{b,{2,1}},{c,{n-1,n}},{d,{n,n-1}}};
  if(a == b && c == d && a != c)
  {
    cout << "0\n";
    continue;
  }
  else if( a == b && c == d && a == c)
  {
    cout << 2 << "\n";
    cout << "1 2\n2 1\n";
    continue;
  }

  int ct = 0;
  for(int i = 0; i < 4; i++)
  {
    if(p[i].first == 1)
    {
      ct++;
    }
  }
  if( ct == 2)
  {
    cout << 2 << "\n";
    for(int i = 0; i < 2; i++)
    {
      if(p[i].first == 1)
      {
        cout << p[i].second.first << " " << p[i].second.second << "\n";
        break;
      }
    }
    for(int i = 2; i < 4; i++)
    {
      if(p[i].first == 0)
      {
        cout << p[i].second.first << " " << p[i].second.second << "\n";
        break;
      }
    }
  }
  else
  {
    int tofind;
    if(ct > 2)
    {
      tofind = 0;
    }
    else 
    {
      tofind = 1;
    }
    cout << "1\n";
    if(a != b)
    {
      if( a != tofind)
      {
        cout << p[0].second.first << " " << p[0].second.second << "\n";
      }
      if( b != tofind)
      {
        cout << p[1].second.first << " " << p[1].second.second << "\n";
      }
    }
    else if(c != d)
    {
      if( c != tofind)
      {
        cout << p[2].second.first << " " << p[2].second.second << "\n";
      }
      if( d != tofind)
      {
        cout << p[3].second.first << " " << p[3].second.second << "\n";
      }
    }
  }
}

return 0;
}
