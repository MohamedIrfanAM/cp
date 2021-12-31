// time-limit: 1000
// problem-url: https://codeforces.com/contest/1616/problem/A
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
  map<int,int> m;
  int c = 0;
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if(x != 0)
    {
      m[abs(x)]++;
    }
    else c = 1;
  }

  for(auto &a: m)
  {
    c += min(a.second,2);
  }
  cout << c << "\n";
}



return 0;
}
