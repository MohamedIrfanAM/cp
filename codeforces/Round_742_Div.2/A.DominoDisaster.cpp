// time-limit: 2000
// problem-url: https://codeforces.com/contest/1567/problem/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  for(int i = 0; i < n; i++)
  {
    if(s[i] == 'U')
    {
      cout << "D";
    }
    else if(s[i] == 'D')
    {
      cout << "U";
    }
    else if(s[i] == 'L')
    {
      cout << "L";
    }
    else if(s[i] == 'R')
    {
      cout << "R";
    }
  }
  cout << "\n";
}



return 0;
}
