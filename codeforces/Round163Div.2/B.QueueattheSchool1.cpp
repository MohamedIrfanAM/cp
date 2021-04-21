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
int positions[num];
cin >> line;

while(time--)
{
  for(int i = 0; i < num; i++)
  {
    if(line[i]=='B')
    {
      if(line[i+1]=='G')
      {
        positions[i] = 1;
      }
      else
      {
        positions[i] = 0;
      }
    }
    else
    {
      positions[i] = 0;
    }
  }
  for(int i = 0; i < num; i ++)
  {
   if(positions[i] == 1)
   {
     line.replace(i,1,"G");
     line.replace(i+1,1,"B");
   }
  }
}
cout << line;

return 0;
}
