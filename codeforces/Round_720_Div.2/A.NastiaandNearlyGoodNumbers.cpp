// time-limit: 1000
// problem-url: https://codeforces.com/contest/1521/problem/A
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
  long long a,b;
  cin >> a >> b;
  
  if( b == 1 )
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n" << a  << " "<< a*((2*b)-1) << " " << 2*a*b << "\n";
  }
 
}
 
return 0;
}
