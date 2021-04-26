// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/459/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;

int f[n];
for(int i = 0; i < n; i++)
{
  cin >> f[i];
}
sort(f,f+n);
int max = f[n-1]-f[0];
int c = 0;
for (int i = 0; i < n; ++i)
{
  for (int j= i+1; j < n; j++) 
  {
    if(abs(f[i]-f[j]) == max)
    {
      c++;
    }
  }  
}
cout << max << " " << c;

return 0;
}
