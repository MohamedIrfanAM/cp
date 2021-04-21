// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int year;
cin >> year;

for (int i = year + 1; i > year; i++)
{
  string y = to_string(i);
  if(y[0] != y[1] && y[0] != y[2] && y[0] !=y[3] && y[1] !=y[2]&& y[1] !=y[3]&& y[2] !=y[3])
  {
    cout << i;
    break;
  }
}


return 0;
}
