// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/43/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
string team[n];
string t;
string s;
int team1 = 0;
int team2 = 0;

for ( int i = 0; i < n; i ++ )
{
  cin >> team[i];
  t = team[0];
   if( t  == team[i] )
   {
     team1++;
   }
   else
   {
     team2++;
     s = team[i];
   }
}

if(team1 > team2 )
{
  cout << t;
}
else
{
  cout << s;
}


return 0;
}
