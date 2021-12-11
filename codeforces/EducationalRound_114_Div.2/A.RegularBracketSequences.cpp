// time-limit: 2000
// problem-url: https://codeforces.com/contest/1574/problem/A
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
  
  string s = "()";

  for(int i = 1; i <= n-1; i++)
  {
    s += "()";
  }
  cout << s << "\n";

  for(int i = 0; i < n-1; i++)
  {
    for(int j = 0; j < ((2*n)-1); j++)
    {
      if(s[j] == ')' && s[j+1] == '(')
      {
        s[j] = '(';
        s[j+1] = ')';
        cout << s << "\n";
        break;
      }
    }
  }
  
}



return 0;
}
