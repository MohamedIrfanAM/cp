// time-limit: 2000
// problem-url: https://codeforces.com/contest/1598/problem/A
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

  string a,b;

  cin >> a;
  cin >> b;


  

  if(a[n-1] == '1' && b[n-1] == '1')
  {
    cout << "NO\n";
  }
  else
  {

    bool block = false;
    for(int i = 0; i < n; i++)
    {
      if(a[i] == '1' && b[i] == '1')
      {
        block = true;
        break;
      }
    }

    if(!block)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

}



return 0;
}
