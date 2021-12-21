// time-limit: 1000
// problem-url: https://codeforces.com/contest/1619/problem/A
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
  cin >> s;

  if(s.length()%2 != 0)
  {
    cout << "NO\n";
    continue;
  }
  
  string s1 = "";
  string s2 = "";

  for(int i = 0; i < s.length()/2; i++)
  {
    s1.push_back(s[i]);
  }
  for(int i = s.length()/2; i < s.length(); i++)
  {
    s2.push_back(s[i]);
  }
  if(s1 == s2)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
  
  // could have used substring

}



return 0;
}
