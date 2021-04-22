// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/318/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
long long n,k;
cin >> n >> k;


if(n-(n/2) >= k)
{
  cout << (2*(k-1))+1;
  exit(0);
}
else if (n-(n/2) < k)
{
  cout << (2*(k-(n-(n/2))));
  exit(0);
}


return 0;
}
