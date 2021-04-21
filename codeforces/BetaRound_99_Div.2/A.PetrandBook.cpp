// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/139/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n;
cin >> n;
int days[7];
for( int i = 0; i < 7; i++)
{
  cin >> days[i]; 
}

int day = 0;
while(true)
{
  for( int i = 0; i < 7; i++)
  {
    cin >> days[i]; 
      if(day < n)
      {
        day+= days[i];
      }
      if(day >= n)
      {
        cout << i+1;
        exit(0);
      } 
  }
}

return 0;
}
