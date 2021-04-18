// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int num ;
cin >> num;
int b[num];
int a[num];
int current = 0;
int max =0;

for ( int i = 0; i < num; i++ )
{
  cin >> a[i] >> b[i];
  if (b[i] - a[i] > 0 )
  {
    current += b[i]-a[i]; 
  }
  if ( a[i]-b[i] > 0 )
  {
    current -= a[i]-b[i];
  }
  if(current > max)
  {
    max = current;
  }
}
cout << max;

return 0;
}
