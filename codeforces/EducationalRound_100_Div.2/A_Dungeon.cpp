// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1463/A
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
  int a,b,c;
  cin >> a >> b >> c;
  int sum = a+b+c;
  int M = min(a,min(b,c));
  if( M >= sum/9 && sum%9 == 0)
  {
    cout << "YES\n";
  }
  else cout << "NO\n";
}

return 0;
}
