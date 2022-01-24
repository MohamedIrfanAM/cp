// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1594/C
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  char c;
  cin >> n >> c;
  string s;
  cin >> s;
  bool no = false;
  for(int i = 0; i < n; i++)
  {
    if(s[i] != c)
    {
      no = true;
      break;
    }
  }
  if(!no)
  {
    cout << "0\n";
    continue;
  }
  else if(s[n-1] == c)
  {
    cout << "1\n" << n << "\n";
    continue;
  }

  no = true;

  for(int i = n-1; i > n/2; i--)
  {
    if(n%i == 0)
    {
      break;
    }
    else if(s[i-1] == c)
    {
      no = false;
      cout << "1\n" << i << "\n";
      break;
    }
  }

  if(no)
  {
    cout << "2\n" << n << " " << n-1 << "\n";
  }
}

return 0;
}
