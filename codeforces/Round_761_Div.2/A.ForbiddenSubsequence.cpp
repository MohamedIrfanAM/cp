// time-limit: 1000
// problem-url: https://codeforces.com/contest/1617/problem/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  string s,t;
  cin >> s >> t;

  sort(s.begin(),s.end());
  if(s.length() < 3)
  {
    cout << s << "\n";
    continue;
  }

  string k;

  if(t[0] == 'b' || t[0] == 'c')
  {
    k = "abc";  
    cout << s << "\n";
    continue;
  }
  else
  {
    k[0] = 'a';
    k[1] = t[2];
    k[2] = t[1];
  }

  int counta = 0,countb = 0,countc = 0;

  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == 'a')
    {
      counta++;
    }
    else if(s[i] == 'b')
    {
      countb++;
    }
    else if(s[i] == 'c')
    {
      countc++;
    }
  }

  if(counta == 0 || countb == 0 || countc == 0)
  {
    cout << s << '\n';
    continue;
  }

  

  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == 'a')
    {
      cout << s[i];
    }
  }
  
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == k[1])
    {
      cout << s[i];
    }
  }
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] == k[2])
    {
      cout << s[i];
    }
  }
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] != k[0] && s[i] != k[1] && s[i] != k[2])
    {
      cout << s[i];
    }
  }
  cout << "\n";
}



return 0;
}
