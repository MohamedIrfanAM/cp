// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/69/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
int num;
int result = 0;

scanf("%d",&num);
int vect[num][3];

for(int i = 0; i < num ; i++)
{
  for(int j = 0; j < 3; j++)
  {
    scanf("%d",&vect[i][j]);
  }
}

for(int i=0; i<num; i++)
{
  result = 0;
  for(int j = 0;j<3; j++)
  {
    result += vect[j][i];
  }
  if(result != 0)
  {
    cout << "NO";
    break;
  }
}

if ( result == 0 )
{
  cout << "YES";
}

return 0;
}
