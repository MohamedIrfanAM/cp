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
  bool streak = false;
  vector<int> d;
  int streak_start = 0;

  for(int i = 1; i < n; i++)
  {
    if( v[i] > v[i-1] && !streak)
    {
      count++;
      streak = true;
      streak_start = i-1;
      if(i == n-1)
      {
        d.push_back(2);
      }
    }
    else if( v[i] < v[i-1] && streak )
    {
      streak = false;
       d.push_back(i-streak_start);
      streak_start = i;
    }
    else if( i == n-1 && streak)
    {
      streak = false;
      d.push_back(i-streak_start+1);
      streak_start = i;
    }
  }

  long long sum = 0;
  for(int a : d)
  {
    sum+= a;
  }
  n -= sum;
  n += d.size();
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
