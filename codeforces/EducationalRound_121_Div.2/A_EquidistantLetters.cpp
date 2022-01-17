// time-limit: 2000
// problem-url: https://codeforces.com/contest/1626/problem/A
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
  string s;

  cin >> s;
  n = s.length();

  map<char,int> m;

  for(int i = 0; i < s.length() ;i++)
  {
    m[s[i]]++;
  }

  for( auto &p : m)
  {
    if(p.second == 2)
    {
      cout << p.first ;
    }
  }
  for( auto &p : m)
  {
    if(p.second == 2)
    {
      cout << p.first;
    }
  }

  for( auto &p : m)
  {
    if(p.second != 2)
    {
      cout << p.first;
    }
  }
  cout << "\n";

}

return 0;
}
