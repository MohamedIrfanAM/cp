// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/266/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string line;
int num, time;
cin >> num >> time;
/* scanf("%d %d",&num, &time); */
/* char line[num]; */
/* scanf("%s",line); */
cin >> line;

while(time--)
{
  for(int i = 0; i < num; i++)
  {
    if(line[i+1]=='G')
    {
      if(line[i]=='B')
      {
       line.replace(i,1,"G");
       line.replace(i+1,1,"B");
        /* line[i] = 'G'; */
        /* line[i+1] = 'B'; */
       i++;
      }
    }
  }
}
cout << line;
/* printf("%s",line); */

return 0;
}
