// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1509/B
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
  cin >> n;
  string s;
  cin >> s;
  int T = 0, M =0;

  bool no = false;
  for(int i = 0 ; i< n; i++)
  {
    if( s[i] == 'T')
    {
      T++;
    }
    else if(s[i] == 'M')
    {
      M++;
      if( T < M)
      {
        no = true;
      }
    }
  }
  if( no || 2*M != T)
  {
    cout << "NO\n";
    continue;
  }

  T=0,M=0;
  no = false;
  for(int i = n-1; i >= 0; i--)
  {
    if( s[i] == 'T')
    {
      T++;
    }
    else if( s[i] == 'M')
    {
      M++;
      if( T < M)
      {
        no = true;
      }
    }
  }


  if( no )
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
  }
  

}

return 0;
}
