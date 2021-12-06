// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1485/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while (t--)
{
  long long  a,b;
  cin >> a >> b;
  long long c = 0;

  if( b == 1 )
  {
    b += 1;
    c ++;
  }
  else
  {
    b += b-1;
    c += b-1;
  }

  while( a > b)
  {
    a = floor(a/b);
    /* cout << a << " " << "\n"; */
    c++;
  }
  if(a < b)
  {
    c++;
    cout << c << "\n";
  }
  else if( a==b )
  {
    c+=2;
    cout << c << "\n";
  }
}

return 0;
}
