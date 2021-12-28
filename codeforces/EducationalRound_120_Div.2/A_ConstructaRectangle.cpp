// time-limit: 2000
// problem-url: https://codeforces.com/contest/1622/problem/A
#include<bits/stdc++.h>
#define cout_red cout << "\033[48;5;196m\033[38;5;15m" 
#define endl_red "\033[0m" << endl; 
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
  cin>> a  >> b >> c;

  int sum = (a+b+c);

  if(sum%2 != 0)
  {
    cout << "NO\n";
    continue;
  }
  sum /= 2;
  if(sum == a && c+b == sum)
  {
    cout << "YES\n";
  }
  else if(sum == b && c+a == sum)
  {
    cout << "YES\n";
  }
  else if( sum == c &&  a+b == sum)
  {
    cout << "YES\n";
  }
  else if(a+(c/2) == sum && b+(c/2) == sum)
  {
    cout << "YES\n";
  }
  else if(b+(a/2) == sum && c+(a/2) == sum)
  {
    cout << "YES\n";
  }
  else if(a+(b/2) == sum && c+(b/2) == sum)
  {
    cout << "YES\n";
  }
  else 
  {
    cout << "NO\n";
  }


}



return 0;
}
