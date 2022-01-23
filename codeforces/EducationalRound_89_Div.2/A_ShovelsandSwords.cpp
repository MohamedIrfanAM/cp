// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1366/A
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
  int a,b;
  cin >> a >> b;
  cout << min(min( a, b) , (a+b)/3) << "\n";
}

return 0;
}
