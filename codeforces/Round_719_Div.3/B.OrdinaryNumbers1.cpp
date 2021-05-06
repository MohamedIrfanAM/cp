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

  for(int i = 1 ; i <= n; i++)
  {
    string s = to_string(i);
    sort(s.begin(),s.end());
    if(s[0] == s[s.length()-1])
    {
      c++;
    }
  }
  cout << c << "\n";
}


return 0;
}
