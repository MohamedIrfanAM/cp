// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/34/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
int h[n];

for (int i = 0; i < n; i++)
{
  cin >> h[i];
}

int min = abs(h[0] - h[n-1]);
int mini;
for( int i = 0; i < n; i ++ )
{
  if(i != n-1)
  {
    if(abs(h[i]-h[i+1]) < min)
    {
    min = abs(h[i]-h[i+1]);
    mini = i;
    }
  }
}
if(abs(h[0]-h[n-1]) <= min)
{
    min = abs(h[0] - h[n-1]);
    cout << n << " " << 1;
    exit(0);
}
cout << mini+1 << " "<< mini+2;
return 0;
}
