// time-limit: 1000
// problem-url: https://codeforces.com/contest/1742/problem/B
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
  set<int> s;
  for(int i = 0; i < n; i++) 
  {
    int x;
    cin >> x;
    s.insert(x) ;
  }
  if(s.size() == n)
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
