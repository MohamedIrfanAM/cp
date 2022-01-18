// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1534/B
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
  vector<int> v(n+2);
  for(int i = 1; i <=n;i++)
  {
    cin >> v[i];
  }
  
  long long uglines = 0;
  long long repair = 0;
  
  for(int i = 1; i <= n+1;i++)
  {
    uglines+= abs(v[i]-v[i-1]);
    if( v[i] > v[i-1] && v[i] > v[i+1])
    {
      repair += min(v[i]-v[i-1],v[i]-v[i+1]);
    }
  }
  cout << uglines - repair << "\n";
  
}

return 0;
}
