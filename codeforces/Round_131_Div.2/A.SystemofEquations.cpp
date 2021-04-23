// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/214/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int m,n;
cin >> n >> m;
int diff = n-m;
int c = 0;
for( int i = 0; i < 999; i++ )
{
  for(int j = 0; j < 999 ; j++)
  {
    if(((i*i) + j) == n && (j*j) + i == m )
    {
        c++;  
    }
  }
}
cout << c;




return 0;
}
