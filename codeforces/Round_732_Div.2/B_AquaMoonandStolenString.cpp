// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1546/B
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
  int n,m;
  cin >> n >> m;
  int num = (2*n)-1;
  vector<string> v(num);
  for( auto &x : v)
  {
    cin >> x;
  }

  for(int i = 0; i < m; i++)
  {
    int x = 0;
    for(int j = 0; j < num; j++)
    {
      x ^= (int)v[j][i];
    }
    cout << char(x);
  }
  cout << endl;

}

return 0;
}
