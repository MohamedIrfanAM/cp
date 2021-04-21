// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int matrix[5][5];
int x,y;
int xmove = 0;
int ymove = 0;

for(int i = 0; i < 5 ; i ++)
{
  for(int j = 0; j < 5; j++)
  {
    scanf("%d",&matrix[i][j]);
    if(matrix[i][j] == 1)
    {
      x = j ;
      y = i ;
      break;
    }
  }
}

xmove = abs(x - 2);
ymove = abs(y - 2);

printf("%d",xmove + ymove);

return 0;
}
