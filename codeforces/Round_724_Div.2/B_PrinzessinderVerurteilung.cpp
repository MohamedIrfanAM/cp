// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1536/B
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
  string s;
  cin >> s;


  char single = 'a';
  bool found = true;
  for(int j = 0; j < 26; j++)
  {
    found = true;
    for(int i = 0; i < n; i++)
    {
      if(s[i] == single)
      {
        found = false;
        break;
      }
    }
    if(found) break;
    single++;
  }
  if(found)
  {
    cout << single << "\n";
    continue;
  }

  string f = "aa";
  found = true;
  for(int y = 0; y < 26; y++)
  {
    f.front() = char('a'+y);
    for(int j = 0; j < 26; j++)
    {
      f.back() = char('a'+j);
      found = true;
      for(int i = 0; i+1 < n; i++)
      {
        string substring =s.substr(i,2);
        if(substring == f)
        {
          found = false;
          break;
        }
      }
      if(found) break;
    }
    if(found) break;
  }
  if(found) 
  {
    cout << f << "\n";
    continue;
  }

  f = "aaa";
  for(int y = 0; y < 26; y++)
  {
    f[1] = char('a'+y);
    for(int j = 0; j < 26; j++)
    {
      f.back() = char('a'+j);
      found = true;
      for(int i = 0; i+2 < n; i++)
      {
        string substring =s.substr(i,3);
        if(substring == f)
        {
          found = false;
          break;
        }
      }
      if(found) break;
    }
    if(found) break;
  }
  if(found) 
  {
    cout << f << "\n";
  }
}

return 0;
}
