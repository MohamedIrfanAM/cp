// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/272/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n ;
int m;
int sum = 0;
int way = 0;
cin >> n;

for(int i = 0; i<n; i++)
{
  cin >> m;
  sum += m;
}

for (int i = 1; i <= 5; i++ )
{
  sum+=1;
  if(sum%(n+1) != 1)
  {
    way++;
  }
}
cout << way;

return 0;
}
