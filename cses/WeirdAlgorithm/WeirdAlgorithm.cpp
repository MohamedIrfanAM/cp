// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1068
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
long long n;
cin >> n;

while(n > 1)
{
  cout << n << " ";
  if(n%2 == 0)
  {
    n /= 2;
  }
  else
  {
    n = (n*3)+1;
  }
}

cout << 1;

return 0;
}
