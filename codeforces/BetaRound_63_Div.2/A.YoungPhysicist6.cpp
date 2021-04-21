// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
#include<cstdio>
#include<stdio.h>

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
int result = x + y + z;

if(result == 0)
{
  /* cout << "YES\n"; */
  printf("YES\n");
}
else
{
  /* cout << "NO\n"; */
  printf("NO\n");
}

return 0;
}
