// time-limit: 1000
// problem-url: https://codeforces.com/contest/1517/problem/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin >> t;

while(t--)
{
  long long num;
  long long n;
  cin >> n;
  if(n%2050 == 0)
  {
    num = n/2050;
    long long sum = 0;;
    while(num != 0)
    {
      sum += num%10;
      num = num/10;
    }
    cout << sum << "\n";
  }
  else
  {
    cout << -1 << "\n";
  }

}

return 0;
}
