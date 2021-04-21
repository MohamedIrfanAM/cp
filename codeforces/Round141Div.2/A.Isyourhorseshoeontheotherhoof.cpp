// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/228/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int shoe[4]; 
int same = 0;
cin >> shoe[0] >> shoe[1] >>shoe[2] >>shoe[3]; 

for ( int i =0; i < 4; i++ )
{
  for(int j = i-1; j >= 0; j--)
  {
    if(shoe[i]==shoe[j])
    {
      same++;
      break;
    }
  }
}
cout << same;

return 0;
}
