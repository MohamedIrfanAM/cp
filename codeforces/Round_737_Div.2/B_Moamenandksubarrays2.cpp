// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1557/B
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
  int n,k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i< n; i++)
  {
    cin >> v[i];
  }

  int count = 0;
  int sum = 0;

  for(int i = 1; i < n; i++)
  {
    if( v[i] > v[i-1])
    {
      if(i-2 >= 0 && v[i-1] > v[i-2])
      {
        sum++;
      }
      else if(i-2 >= 0 && v[i-1] < v[i-2] )
      {
        sum += 2;
        count++;
      }
      else if( i-2 < 0)
      {
        sum+=2;
        count++;
      }
    }
  }
  cout << sum << " " << count << "\n";
  n -= sum ;
  n += count;

  if( n <= k)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }

}

return 0;
}
