// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
#include<cstdio>
#include<string>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int caps = 0;
int lows = 0;
string word;
cin >> word;
for( int i = 0; i < word.length(); i ++ )
{
  if(isupper(word[i]))
  {
    caps++;
  }
  else
  {
    lows++;
  }
}
if(caps > lows)
{
  for(int i = 0; i < word.length(); i++)
  {
    word[i] = toupper(word[i]);
  }
}
else
{
  for(int i = 0; i < word.length(); i++)
  {
    word[i] = tolower(word[i]);
  }
}
cout << word;
return 0;
}
