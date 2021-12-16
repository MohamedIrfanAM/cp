// time-limit: 1000
// problem-url: https://codeforces.com/contest/1593/problem/A
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
  long int w = max(c,max(a,b));
  
  if(w != a)
  {
    cout << w - a + 1 << " ";
  }
  else if( a == w && b != w && c != w )
  {
    cout << 0  << " ";
  }
  else
  {
    cout << 1 << " ";
  }

  if(w != b)
  {
    cout << w - b + 1 << " ";
  }
  else if( a != w && b == w && c != w )
  {
    cout << 0 << " ";
  }
  else
  {
    cout << 1 << " ";
  }

  if(w != c)
  {
    cout << w - c + 1 ;
  }
  else if( a != w && b != w && c == w )
  {
    cout << 0 ;
  }
  else
  {
    cout << 1 ;
  }
  



  cout << "\n";

}



return 0;
}
