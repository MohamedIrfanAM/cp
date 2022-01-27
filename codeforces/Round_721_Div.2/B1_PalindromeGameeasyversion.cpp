// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1527/B1
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
  int zerocount = 0;
  for(int i = 0; i < n; i++)
  {
    if(s[i] == '0')
    {
      zerocount++;
    }
  }
  if(zerocount%2 == 0 || zerocount == 1) 
  {
    cout << "BOB\n";
    continue;
  }
  else
  {
    cout << "ALICE\n";
  }
  
}

return 0;
}
