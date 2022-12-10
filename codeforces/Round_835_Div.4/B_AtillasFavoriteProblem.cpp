// time-limit: 1000
// problem-url: https://codeforces.com/contest/1760/problem/B
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
  
  sort(s.begin(),s.end());
  cout << int(s[n-1])-96 << "\n";
}

return 0;
}
