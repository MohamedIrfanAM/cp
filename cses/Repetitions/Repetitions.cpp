// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1069
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string s;
cin >> s;
int length = s.length();
int count = 0 ;
int max = 0;
for(int i = 0; i < length; i++)
{
  count = 1;
  for(int j = i+1; j < length; j++)
  {
    if(s[i] == s[j])
    {
      count++;
    }
    else
    {
      break;
    }
  }
  if(count > max)
  {
    max = count;
  }
}
cout << max;
return 0;
}
