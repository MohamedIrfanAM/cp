// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1556/A
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
  int c,d;
  cin >> c >> d; 

  if(abs(c-d)%2 != 0)
  {
    cout << "-1\n";
  }
  else if( c == d && c == 0 )
  {
    cout << "0\n";
  }
  else if( c == d )
  {
    cout << "1\n";
  }
  else
  {
    cout << "2\n";
  }
}



return 0;
}
