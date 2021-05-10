// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int a,b,c,d;
scanf("%d %d %d %d", &a, &b , &c, &d);

int ans = max_of_four(a,b,c,d);
printf("%d", ans);

return 0;
}

int max_of_four(int a, int b, int c, int d)
{
  int myArray[4] = {a,b,c,d};
  int max = 0;
  
  for (int i = 0; i < 4; i++)
  {
    
    if(myArray[i] > max)
    {
      max = myArray[i];
    }
  }
return max;
}
