// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/218/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n,m;
cin >> n >> m;

int seat[m];
int seat1[m];
for(int i = 0; i < m; i++)
{
  cin >> seat[i];
  seat1[i] = seat[i];
}

int max = 0;
int min = 0;


for(int j = 0; j < n; j++)
{
  int maxnum =  *max_element(seat,seat+m);
  int minnum =  *min_element(seat1,seat1+m);
  
  max += maxnum;
  min += minnum;
  for (int i = 0; i < m; ++i) {
    if(seat[i] == maxnum)
    {
      seat[i]--;
      break;
    }
  }
  for (int i = 0; i < m; ++i) {
    if(seat1[i] == minnum)
    {
      if(seat1[i] != 1 && seat1[i] == minnum)
      {
      seat1[i]--;
      break;
      }
      else if(seat1[i] == 1 && seat1[i] == minnum)
      {
        seat1[i] += 1001;
        break;
      }
    }
  }
}



cout << max << " " << min;

return 0;
}
