// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/215/A
#include<bits/stdc++.h>
#include<cstdio>
#include <cmath>

 bool integer(float k)
    {
        if( k == (int) k) return true;
        return false;
    }

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
cin >> n;
float a[n];

for(int i = 0; i < n; i++)
{
  cin >> a[i];
}

cin >> m;
 float b[m];

for(int i = 0; i < m; i++)
{
  cin >> b[i];
}

int max = 0;
vector <int> maxnums;
for(int i = 0; i < n; i++)
{
  for(int j = 0; j < m; j++)
  {
    float rat = b[j]/a[i];
    if(integer(rat))
    {
      if( rat >= max )
      {
        max = rat;
        maxnums.push_back(max);
      }
    }
  }
}

cout << count(maxnums.begin(),maxnums.end(),max); 

return 0;
}
