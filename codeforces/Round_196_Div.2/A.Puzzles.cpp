// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/337/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin >> n >> m;
int f[m];

for(int i = 0; i < m; i++)
{
  cin >> f[i];
}

sort(f,f+m);
int min = 1000;
for(int i = 0; i < m; i++)
{
  if(i+(n-1) < m)
  {
   if(f[i+(n-1)]-f[i] <= min) 
   {
     min = f[i+(n-1)]-f[i] ;
   }
  }
}
cout << min;
return 0;
}
