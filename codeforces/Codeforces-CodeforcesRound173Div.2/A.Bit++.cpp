// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int x = 0;

for( int i = 0; i < n; i++ )
{
  string s;
  cin >> s;
  if(s[0] == '-' || s[2] == '-')
  {
    x--;
  }
  if(s[2] == '+' || s[0] == '+')
  {
    x++;
  }
}

cout << x;





return 0;
}
