// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

long long num;
string nstring;
cin >> num;
int luckynums = 0;
nstring = to_string(num);

for(int i = 0; i < nstring.length(); i++)
{
  if(nstring[i] == '7' || nstring[i] == '4')
  {
    luckynums++;
  }
}

string digit = to_string(luckynums);
int loop = 0;

for(int i = 0; i < digit.length(); i++)
{
  if(digit[i] == '7' || digit[i] == '4')
  {
    loop++;
  }

  if(digit[i] != '4')
  {
    if(digit[i] != '7')
    {
      cout << "NO";
      break;
    }
    
  }
}

if(loop == digit.length())
{
  cout << "YES";
}

return 0;
}
