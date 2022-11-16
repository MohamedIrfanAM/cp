// time-limit: 1000
// problem-url: https://codeforces.com/contest/1748/problem/A
#include<bits/stdc++.h>
#include <iomanip>

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
  int ans = ceil(n/2.0);
  cout << ans << "\n";
}

return 0;
}
