// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1490/C
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
  long long int n;
  cin >> n;

  bool found = false;
  for(long long int i = 1; i < 10000; i++)
  {
    long long int j = n-pow(i,3);
    int cb1 = cbrt(j);
    
    if(pow(cb1,3) == j && j+pow(i,3) == n && j > 0)
    {
      found = true;
      break;
    }
  }

  if(found )
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
