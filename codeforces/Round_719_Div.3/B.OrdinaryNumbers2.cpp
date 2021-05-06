// time-limit: 2000
// problem-url: https://codeforces.com/contest/1520/problem/B
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t ;
cin >> t;
while(t--)
{
  long long n;
  cin >> n;
  long c = 0;
  
  for(int i = 1; i <= n; i++)
  {
    string s = to_string(i);
    int k = 0;
    int length = s.length();
    for(int j = 0; j < length; j++)
    {
      if(s[0] != s[j])
      {
        break;
      }
      else
      {
        k++;
      }
    }
    if(k == length)
    {
      c++;
    }
  }

  cout << c << "\n";
}


return 0;
}
