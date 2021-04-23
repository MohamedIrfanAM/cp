// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/34/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int m,n;
cin >> n >> m;
int tv[n];
int count = 0;
for(int i = 0; i < n; i++)
{
  cin >> tv[i];
  if(tv[i] < 0)
  {
    count++;
  }
}
sort(tv,tv+n);

int t = 0;
int z;
if( count < m )
{
  z = count;
}
else
{
 z = m;
}

for(int i = 0; i < z ; i ++)
{
  t += tv[i];
}

cout << abs(t);

return 0;
}
