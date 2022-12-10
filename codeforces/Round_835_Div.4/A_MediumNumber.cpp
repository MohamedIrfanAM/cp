// time-limit: 1000
// problem-url: https://codeforces.com/contest/1760/problem/A
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
  vector<int> v(3);
  cin >> v[0];
  cin >> v[1];
  cin >> v[2];

  sort(v.begin(),v.end());

  cout << v[1] << "\n";
}

return 0;
}
