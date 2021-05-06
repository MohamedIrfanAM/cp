// time-limit: 2000
// problem-url: https://codeforces.com/contest/1520/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t ;
cin >> t;
while(t--)
{
  long long n;
  cin >> n;
  long c = 0;
  for(int i = 1; i <= n; i++)
  {
    int num = 1;
   if( i >= 11)
   {
     
   }
   else if( i < 10 )
   {
     c++;
   }
  }

  cout << c << "\n";
}


return 0;
}
