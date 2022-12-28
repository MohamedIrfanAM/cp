// time-limit: 1000
// problem-url: https://www.codechef.com/START68D/problems/MAKEMONEY
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
  int n,x,c;
  cin >> n >> x >> c;
  vector<int> v(n);

  for(int &a : v)
  {
    cin >> a;
  }

  sort(v.begin(),v.end());


  int cost = 0;
  int sum = 0;
  for(int &a : v)
  {
    if((x-a) > c )
    {
      cost += c;
      a = x;
    }
    sum += a;
  }

  cout << sum - cost << "\n";

}

return 0;
}
