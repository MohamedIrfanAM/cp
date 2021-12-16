// time-limit: 1000
// problem-url: https://codeforces.com/contest/1560/problem/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  long int a,b,c;
  cin >> a >> b >> c;

  if( a == b || a == c || b == c || abs(a-b) == 1)
  {
    cout << "-1\n";
    continue;
  }



  long int total = 2*(abs(a-b));

  if(c > total || a > total || b > total)
  {
    cout << "-1\n";
    continue;
  }

  if(c > total/2)
  {
    cout << c - total/2 << "\n";
  }
  else
  {
    cout << c + total/2 << "\n";
  }
  
}



return 0;
}
