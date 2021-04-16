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

for(int i = 0; i < code.length(); i++)
{
  if(code[i]=='-')
  {
    if(code[i+1]=='.')
    {
      cout << 1;
    }
    else
    {
      cout << 2;
    }
     i++;
  }
  else 
  {
      cout << 0;
  }

}

return 0;
}
