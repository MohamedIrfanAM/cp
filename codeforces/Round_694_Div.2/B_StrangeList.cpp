// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1471/B
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
  int n,x;
  cin >> n >> x;
  long long int sum = 0;
  vector<int> v(n);

  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
    sum += v[i];
  }
  
  bool no_divisible = false;

  vector<int> v1 = v;
  while(true)
  {
    for(int j = 0; j < n; j++)
    {
      if(v[j]%x == 0)
      {
        sum += v1[j];
        v[j] /= x;
      }
      else
      {
        no_divisible = true;
        break;
      }
    }
    if( no_divisible) break;
  }

  cout << sum << "\n";
  

}

return 0;
}
