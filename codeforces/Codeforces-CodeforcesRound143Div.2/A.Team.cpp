// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
int sure[n][3];
int t = 0;
int c = 0;
for(int i = 0; i < n; i++)
{
  t = 0;
  for(int j = 0; j < 3; j++)
  {
    cin >> sure[i][j];
    if(sure[i][j] == 1)
    {
      t++;
    }
  }
  if(t >= 2)
  {
    c++;
  }
}
cout << c;


return 0;
}
