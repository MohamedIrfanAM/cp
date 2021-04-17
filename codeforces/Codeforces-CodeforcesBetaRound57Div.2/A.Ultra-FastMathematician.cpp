// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/61/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string string1;
string string2;
cin >> string1 ;
cin >> string2;
int answer[string1.length()];

for(int i = 0; i < string1.length(); i++)
{
  if(string1[i] == string2[i])
  {
    answer[i] = 0;
  }
  else
  {
    answer[i] = 1;
  }
}
for ( int i =0 ; i < string1.length(); i++ )
{
  cout << answer[i];
}




return 0;
}
