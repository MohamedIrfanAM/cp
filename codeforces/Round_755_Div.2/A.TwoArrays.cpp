// time-limit: 1000
// problem-url: https://codeforces.com/contest/1588/problem/A
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
  int a[n],b[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  sort(a,a+n);
  sort(b,b+n);
  
  
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
      if(a[i] == b[i] || a[i]+1 == b[i])
      {
        continue;
      }
      else
      {
        ok = false;
        break;
      }
    }
    if(ok)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }

}



return 0;
}
