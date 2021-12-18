// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1584/A
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
  long long int u,v;
  cin >> u >> v;

  cout << u*u << ' '<< -1*v*v << "\n";
}



return 0;
}
