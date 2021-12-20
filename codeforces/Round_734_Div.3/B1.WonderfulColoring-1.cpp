// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1551/B1
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

  map<char,int> m;
  for(char c: s)
  {
    if(m[c] < 2)
    {
      m[c]++;
    }
  }
  int sum = 0;
  for(pair<char,int> p: m)
  {
     sum += p.second;
  }
  cout << sum/2 << "\n";
  
}

return 0;
}
