// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/144/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int no ;
cin >> no;
int line[no];
int max = 0;
int min = line[0];
int maxi,mini;
for(int i = 0; i < no; i++)
{
  cin >> line[i];
  if(line[i] > max)
  {
    max = line[i];
    maxi = i;
  }
}

min = line[0];
for ( int i = 0; i < no; i++ )
{
  if(line[i] <= min)
  {
    min = line[i];
    mini = i;
  }
}

/* cout << maxi << "\n"; */
/* cout << mini << "\n"; */
if( maxi == no-1 || mini == 0)
{
  maxi -= 1;
}
else if( maxi > mini )
{
  maxi -= 1;
}
if( mini == 0 && maxi == no-1)
{
  maxi -= 2;
}

/* cout << maxi << "\n"; */
/* cout << mini << "\n"; */

cout << (no -1 -mini) + (maxi);

return 0;
}
