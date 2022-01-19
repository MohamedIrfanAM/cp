// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1511/B
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
  int a,b,c;
  cin >> a >> b >> c;

  int A = pow(10,a-1);
  int B = pow(10,b-1);
  int C = pow(10,c-1);


  int x = C,y = C;

  while( x < A )
  {
     x *= 2;
  }
  while( y < B)
  {
    y *= 3;
  }
  cout << x << " " << y << "\n";
}

return 0;
}
