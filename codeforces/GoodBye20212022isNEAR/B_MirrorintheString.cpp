// time-limit: 1000
// problem-url: https://codeforces.com/contest/1616/problem/B
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

  if( n == 1)
  {
    cout << s << s<< "\n";
    continue;
  }
  else if( s[0] == s[1])
  {
    cout << s[0] << s[1] << "\n";
    continue;
  }
  string k,l="-1";
  for(int i = 0; i < n; i++)
  {
    if( i != n-1)
    {
      if(s[i] < s[i+1])
      {
        k = s.substr(0,i+1);
        l = k;
        reverse(k.begin(),k.end());
        l.append(k);
        break;
      }
    }
    else 
    {
      k = s;
      l = k;
      reverse(k.begin(),k.end());
      l.append(k);
    }
  }
  cout << l << "\n";

}



return 0;
}
