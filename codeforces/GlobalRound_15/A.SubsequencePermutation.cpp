// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1552/A
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
  string s;
  int n;
  cin >> n;
  cin >> s;
  string dup;

  dup = s;

  sort(s.begin(),s.end());

  int count = 0;
  for(int i = 0; i < n ; i++)
  {
    if(s[i] != dup[i])
    {
      count++;
    }
  }
  cout << count << "\n";
}



return 0;
}
