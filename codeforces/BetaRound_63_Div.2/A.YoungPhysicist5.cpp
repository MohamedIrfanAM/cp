// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
int num;
int x,y,z = 0;

scanf("%d",&num);
int vect[num][3];

for(int i = 0; i < num ; i++)
{
  for(int j = 0; j < 3; j++)
  {
    scanf("%d",&vect[i][j]);
  }
  x += vect[i][0];
  y += vect[i][1];
  z += vect[i][2];
}

if( x == 0 && y == 0 &&z == 0)
{
  cout << "YES";
}
else
{
  cout << "NO";
}

return 0;
}
