// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/219/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int k;
cin >> k;
string s;
cin >> s;
int n;

/* if(s.length()%k == 0) */
/* { */
  n = s.length()/k;
/* } */
/* else if( s.length()%k != 0 ) */
/* { */
/*   cout << -1; */
/*   exit(0); */
/* } */

int b[n];
sort(s.begin(),s.end());

if(count(s.begin(),s.end(),s[0]) == s.length() && k == s.length())
{
  cout << s;
  exit(0);
}

for(int i = 0; i < s.length(); i+=n)
{
  b[i] = count(s.begin(),s.end(),s[i]) ;
  if(b[i] != n || b[i]%k != 0)
  {
    cout << -1;
    exit(0);
  }
}

for(int j = 0; j < n; j++)
{
  for(int i = 0; i < s.length(); i+=n)
  {
    cout << s[i];
  }
}
return 0;
}
