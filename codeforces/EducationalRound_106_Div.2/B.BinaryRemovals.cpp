// time-limit: 2000
// problem-url: https://codeforces.com/contest/1499/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t ;
cin >> t;

while(t--)
{
  string s ;
  cin >> s;
  bool found = false;
  int length = s.length();
    
  int index = s.find("11");
  if(index == -1)
  {
    cout << "YES\n";
  }
  else
  {
    int indzero = s.rfind("00");
    if(indzero == -1)
    {
      cout << "YES\n";
    }
    else
    {
      if(index < indzero)
      {
        cout << "NO\n";
      }
      else
      {
        cout << "YES\n";
      }
    }
  }
}




return 0;
}
