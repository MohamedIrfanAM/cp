// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
#include<cstdio>
#include<stdio.h>

using namespace std;


int main()
{
int num;
int a,b,c;
int x = 0;
int y = 0;
int z = 0;

scanf("%d",&num);
int vect[num][3];

for(int i = 0; i < num ; i++)
{
  scanf("%d %d %d",&a,&b,&c);
  x += a;
  y += b;
  z += c;
}

if(x==0&&y==0&&z==0)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}

return 0;
}
