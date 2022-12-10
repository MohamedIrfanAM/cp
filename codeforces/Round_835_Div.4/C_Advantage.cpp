// time-limit: 2000
// problem-url: https://codeforces.com/contest/1760/problem/C
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

  vector<int> v(n);
  vector<int> d;

  for(int &a: v)
  {
    cin >> a;
  }
  d = v;
  
  sort(v.begin(),v.end());

  int mx = v[n-1];
  int mn = v[n-2];


  for( auto it = d.begin(); it != d.end(); it++)
  {
    int a = *it;
    if(a == mx )
    {
      cout << mx-mn << " ";
    }
    else
    {
      cout << a-mx << " ";
    }
  }
  cout << "\n";
}

return 0;
}
