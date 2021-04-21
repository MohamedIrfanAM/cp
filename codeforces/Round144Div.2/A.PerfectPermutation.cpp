// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/233/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int size;
cin >> size;
int p[size];

if (size%2)
{
  cout << "-1";
}
else
{
  for ( int i = 1; i <= size; i++ )
  {
    p[i] = i + 1;
    p[i+1] = i;
    i++;
  }
  for ( int i = 1; i <= size; i++ )
  {
    cout << p[i] << " ";
  }
}

return 0;
}
