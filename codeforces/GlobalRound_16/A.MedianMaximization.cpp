// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1566/A
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
  int n,s;
  cin >> n >> s;

  if(n == 1)
  {
    cout << s << "\n";
    continue;
  }
  else if ( s == 1 )
  {
    cout << 0 << "\n";
    continue;
  }

  int mid = ceil(n/2.0);
  int d = (n-mid)+1;
  cout << s/d << "\n";
}



return 0;
}
