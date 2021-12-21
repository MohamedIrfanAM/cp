// time-limit: 1000
// problem-url: https://codeforces.com/contest/1619/problem/B
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
  int sq = (sqrt(n+0.5));
  int cb = (cbrt(n+0.5));
  int sqcb = (pow(n+0.5,1.0/6.0));

  cout << sq + cb - sqcb << "\n";

/*
   if we don't add 0.5, for example n = 64, 
   we get sqrt as 7.99 as and when converted to int (type compatability)
   it will be rounded to 7 which is wrong
   and 6th root as 3.9999 -> 3 which is wrong that is why we add 0.5 to get 4.05  and 
   rounder will 4

  to see 
  n = 64000000
  cout << sqrt(n) << " " << cbrt(n) << ' ' << pow(n,1/6.0) << '\n'; 
  cout << sqrt(n) << " " << cbrt(n) << ' ' << floor(pow(n,1.0/6.0)) << '\n'; 
  cout << sq << " " << cb << ' ' << sqcb;

*/

}
return 0;
}
