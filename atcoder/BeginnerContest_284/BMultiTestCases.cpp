// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc284/tasks/abc284_b
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

  int count = 0;
  for(auto &a:v)
  {
    cin >> a;
    if(a%2 != 0)
    {
      count++;
    }
  }

  cout << count << "\n";

}

return 0;
}
