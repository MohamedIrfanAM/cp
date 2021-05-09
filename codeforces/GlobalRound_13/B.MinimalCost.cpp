// time-limit: 2000
// problem-url: https://codeforces.com/contest/1491/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin >> t;
while(t--)
{
  int n,v,u;
  cin >> n >> u >> v;
  int block[n];
  int max = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> block[i];
    if(i != 0 )
    {
      if(abs(block[i]-block[i-1]) > max)
      max = abs(block[i]-block[i-1]);
    }
  }
  if(max == 0)
  {
    cout << v + min(u,v) << "\n";
  }
  else if(max == 1)
  {
    cout << min(u,v)<< "\n"; 
  }
  else
  {
    cout << 0 << "\n";
  }
}



return 0;
}
