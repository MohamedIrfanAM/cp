// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1426/C
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
  int s = sqrt(n);
  int d = ceil((float)n/s);
  cout << s+d-2 << "\n";
}

return 0;
}
