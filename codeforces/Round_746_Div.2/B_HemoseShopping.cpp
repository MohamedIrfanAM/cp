// time-limit: 1000
// problem-url: https://codeforces.com/contest/1592/problem/B
#include <algorithm>
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
  vector<int> arr(n);
  for(int i = 0; i< n; i++)
  {
    cin >> arr[i];
  }

  if( is_sorted(arr.begin(),arr.end()))
  {
    cout << "YES\n";
    continue;
  }
  if( n >= (2*x))
  {
    cout << "YES\n";
    continue;
  }
  if( n == x)
  {
    cout << "NO\n";
    continue;
  }
  vector <int> v;
  v = arr;
  sort(v.begin(),v.end());

  bool no = false;
  for(int i =  n-x ; i < x ;i++)
  {
    if( arr[i] != v[i])
    {
      cout << "NO\n";
      no = true;
      break;
    }
  }
  if(!no)
  {
    cout << "YES\n";
  }
}



return 0;
}
