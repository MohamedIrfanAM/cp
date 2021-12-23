// time-limit: 2000
// problem-url: https://codeforces.com/contest/1617/problem/B
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

  int a;
  for(int i = 2; i < n-1; i++)
  {
    if(__gcd(i,n-1-i) == 1)
    {
      a = i;
      break;
    }
  }
  cout << a << " " << n-1-a << " " << 1 << "\n";
}



return 0;
}
