// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
using namespace std;

int toint(char s)
{
  if(s == '1')
  {
    return 1;
  }
  else if (s == '2')
  {
    return 2;
  }
  else if ( s == '3' )
  {
    return 3;
  }
  else
  {
    return 0;
  }
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string n;
cin >> n;
int num[n.length()];
for (int i = 0; i < n.length(); i+=2)
{ 
  num[i] = toint(n[i]);
}
sort(num,(num+n.length()));

for ( int i = 0; i < n.length(); i++ )
{
  if(num[i] != 0 && num[i] <= 3)
  {
    cout << num[i];
    if(i != n.length()-1 && num[i+1] <= 3 )
    {
      cout << "+";
    }
  }
}
return 0;
}
