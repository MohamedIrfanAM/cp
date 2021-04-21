// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

string code;
cin >> code;
int positions[code.length()];

for(int i = 0; i < code.length(); i++)
{
  if(code[i]=='-')
  {
    if(code[i+1]=='.')
    {
      positions[i] = 1;
    }
    else
    {
      positions[i] =2;
    }
     i++;
  }
  else 
  {
    positions[i] = 3;
  }

}

for(int i = 0; i < code.length(); i ++)
{
  if (positions[i] == 3)
  {
    cout << 0;
  }

  else if (positions[i] == 1)
  {
    cout << 1;
  }

  else if (positions[i] == 2)
  {
    cout << 2;
  }
}

return 0;
}
