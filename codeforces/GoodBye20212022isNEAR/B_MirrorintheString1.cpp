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
  string min;
  min.push_back(s[0]);
  min.push_back(s[0]);

  for(int i = 0; i < n; i++)
  {
    string k = s.substr(0,i+1);
    string l = k;
    reverse(k.begin(),k.end());
    l.append(k);
    if(l < min)
    {
      min = l;
    }
  }
  cout << min << "\n";
}



return 0;
}
