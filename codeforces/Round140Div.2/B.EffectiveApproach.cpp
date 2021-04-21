// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/227/B
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

long long v = 0;
long long p = 0;
int n1;
int n;

cin>> n;
int index[100004], a;

for(int i = 0; i < n ; i++)
{
  cin >> a;
  index[a] = i;
}

  cin >> n1;
  int m;


for(int i = 0; i < n1; i++)
{
  cin >> m;
  v += index[ m] + 1;
  p += n - index[m];
}
cout << v << " " << p;
return 0;
}
