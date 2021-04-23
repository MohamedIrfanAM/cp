// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/339/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
int m;
cin >> n >> m;
int h[m+1];
int d[m+1];

d[0] = 0;
for( int i = 1; i <= m ; i++ )
{
  cin >> h[i];
  d[i] = h[i];
}

sort(d, d+(m+1));
int mov = 0;
int k = 1;
int z = 0;
d[0] = 0;
for( int i = 1; i <= m ; i++ )
{
    if( d[i] == d[i-1] )
    {
      z = 1; 
    } 
    else
    {
      z = k;
    }
    for(int j = z; j <= m; j++)
    {
      if(h[j] == d[i])
      {
        if(j > k)
        {
          mov += h[j]-k;
          k = h[j];
        }
        else if(j < k )
        {
          mov += h[j]+(n-k);
          k = h[j];
        }
      }
        cout << d[i] <<" "  << h[j] <<" " << k << " " << j << " " << mov  << "\n";
    }
}

 
/* cout << mov; */

return 0;
}
