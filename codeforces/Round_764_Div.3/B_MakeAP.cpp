// time-limit: 2000
// problem-url: https://codeforces.com/contest/1624/problem/B
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

  int a1 = a;
  if(((2*b)-c)%a == 0 && ((2*b - c)) > 0 )
  {
    cout << "YES\n" ;
  }
  else if(((2*b)-a)%c == 0 && ((2*b)-a) > 0 )
  {
    cout << "YES\n";
  }
  else if( ((a + c)/2 ) %b == 0 && a + c > 0 && (a+c)%2 == 0) 
  {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }

}



return 0;
}
