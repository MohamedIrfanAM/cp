// time-limit: 2000
// problem-url: https://codeforces.com/contest/1606/problem/A
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
  string s;
  cin >> s;
  int abcount = 0,bacount = 0;

  for(int i = 0; i+1 < s.length(); i++)
  {
    if(s[i] == 'a' && s[i+1] == 'b')
    {
      abcount++;
    }
    else if( s[i] == 'b' && s[i+1] == 'a')
    {
      bacount++;
    }
  }

  if (abcount == bacount)
  {
    cout << s << "\n";
    continue;
  }

  if(abcount > bacount)
  {
    if(s[0] == 'a')
    {
      s[0] = 'b'; 
      abcount--;
      if(abcount == bacount)
      {
        cout << s << "\n";
        continue;
      }
    }
    if( s[s.length()-1] == 'b')
    {
      s[s.length()-1] = 'a';
      abcount--;
      if(abcount == bacount)
      {
        cout << s << "\n";
        continue;
      }
    }
  }
  
  else if(bacount > abcount)
  {
    if(s[0] == 'b')
    {
      s[0] = 'a'; 
      bacount--;
      if(abcount == bacount)
      {
        cout << s << "\n";
        continue;
      }
    }
    if( s[s.length()-1] == 'a')
    {
      s[s.length()-1] = 'b';
      bacount--;
      if(abcount == bacount)
      {
        cout << s << "\n";
        continue;
      }
    }
  }
}



return 0;
}
