// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int num;
int result = 0;

scanf("%d",&num);
int vect[num][3];

for(int i = 0; i < num ; i++)
{
  for(int j = 0; j < 3; j++)
  {
    scanf("%d",&vect[i][j]);
    result += vect[i][j];
  }
}

if ( result == 0 )
{
  cout << "YES";
}
else
{
  cout << "NO";
}

return 0;
}
