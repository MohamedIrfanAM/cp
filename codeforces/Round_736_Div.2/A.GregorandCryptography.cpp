// time-limit: 1000
// problem-url: https://codeforces.com/contest/1549/problem/A
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
  int n ;
  cin >> n;

  if(n%2 == 0)
  {
    cout << 2 << " " << n << "\n";
  }
  else
  {
    cout << 2 << " " << n-1 << "\n";
  }
}



return 0;
}
