// time-limit: 2000
// problem-url: https://codeforces.com/contest/1629/problem/B
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
  if( a == b && a != 1) 
  {
    cout << "YES\n";
    continue;
  }
  else if( a == b && a == 1)
  {
    cout << "NO\n"; 
    continue;
  }
  else if( c == 0)
  {
    cout << "NO\n";
    continue;
  }

  int num = b-a+1;
  int min;
  if(num%2==0)
  {
    min = num/2;
  }
  else 
  {
    if( a%2 == 0) min = (num-1)/2;
    else  min = (num+1)/2; 
  }
  if( c >= min)
  {
    cout << "YES\n";
  }
  else cout << "NO\n";
}

return 0;
}
