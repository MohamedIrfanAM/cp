// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1569/A
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

  if(n == 0)
  {
    cout << "-1 -1\n";
    continue;
  }

  bool found = false;
  for(int i = 0; i < n-1; i++)
  {
    if(s[i] == 'a' && s[i+1] == 'b')
    {
      cout << i+1 << " " << i+2 << "\n";
      found = true;
      break;
    }
    else if(s[i] == 'b' && s[i+1] == 'a')
    {
      cout << i+1 << " " << i+2 << "\n";
      found = true;
      break;
    }
  }
  if(!found)
  {
    cout << "-1 -1\n";
  }

}



return 0;
}
