// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1612/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  int n,a,b;
  cin >> n >> a >> b;

  int nl,nr;

  if( a > b)
  {
    nr = n-a+1;
    nl = b;
  }
  if( b > a)
  {
    nr = n-a;
    nl = b - 1;
  }

  if(n/2 > nl || n/2 > nr)
  {
    cout << "-1\n";
    continue;
  }

  if(n == 2)
  {
    cout << a << " " << b << "\n";
    continue;
  }
  
  vector<int> ans(n);
  ans[0] = a;
  ans[n-1] = b;
  int l = 1, r = n;
  int pl = 1,pr = n-2;
  while(pr - pl > 0)
  {
    if(r != b)
    {
      ans[pl] = r;
    }
    else
    {
      r--;
      ans[pl] = r;
    }

    if(l != a)
    {
      ans[pr] = l;
    }
    else
    {
      l++;
      ans[pr] = l;
    }
    pr--;
    pl++;
    l++;
    r--;
  }

  for(int &i:ans)
  {
    cout << i << " ";
  }
  cout << "\n";

}
return 0;
}
