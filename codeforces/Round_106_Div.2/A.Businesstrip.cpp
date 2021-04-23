// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/149/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int k;
cin >> k;
int m[12];

for( int i = 0; i < 12 ; i++ )
{
  cin >> m[i];
}
sort(m,m+12);
reverse(m,m+12);

if(k == 0)
{
  cout << 0;
  exit(0);
}

int max = 0;
int count = 0;
for(int i = 0; i < 12 ; i ++)
{
 max += m[i];
 count++;
 if(max >= k)
 {
   cout << count;
   exit(0);
 }
}
cout << -1;
return 0;
}
