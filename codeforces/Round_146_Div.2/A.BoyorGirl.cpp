// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string name;
cin >> name;
int same[name.length()];
int c = 0;

for ( int i = 0; i < name.length(); i++ )
{
  same[i] = 0;
  for( int j = i+1; j < name.length(); j++ )
  {
    if(name[i] == name[j])
    {
      same[i] = 1;
    }
  }
  if( same[i] == 1 )
  {
    c++;
  }
}

if((name.length()-(c))%2 == 0 )
{
  cout << "CHAT WITH HER!";
}
else
{
  cout << "IGNORE HIM!";
}

return 0;
}
