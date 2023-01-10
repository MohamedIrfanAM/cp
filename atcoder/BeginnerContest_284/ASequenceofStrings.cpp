// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc284/tasks/abc284_a
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
tst =1 ;
while(tst--)
{
  int n;
  cin >> n;
  vector<string> v(n);

  for(string &s : v)
  {
    cin >> s;
  }

  for(int i = n-1 ; i >= 0; i--)
  {
    cout << v[i] << "\n";
  }
}

return 0;
}
