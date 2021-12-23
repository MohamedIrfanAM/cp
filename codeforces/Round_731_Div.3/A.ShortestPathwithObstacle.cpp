// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1547/A
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
  int x1,y1,x2,y2,fx,fy;

  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> fx >> fy;
  if(x1 == x2 && x2 == fx )
  {
    if(fy > y1 && fy < y2)
    {
      cout << abs(y1 - y2) + 2 << "\n";  
      continue;
    }
    else if( fy > y2 && fy < y1 )
    {
      cout << abs(y1 - y2) + 2 << "\n";  
      continue;
    }
    else
    {
      cout << abs(y1-y2) << "\n";
      continue;
    }
  }

  else if(y1 ==y2 && y2 == fy )
  {
    if(fx > x1 && fx < x2)
    {
      cout << abs(x1 - x2) + 2 << "\n";  
      continue;
    }
    else if( fx > x2 && fx < x1 )
    {
      cout << abs(x1 - x2) + 2 << "\n";  
      continue;
    }
    else
    {
      cout << abs(x1-x2) << "\n";
    }
  }
  else
  {
    cout << abs(x1-x2) + abs(y1 - y2) << "\n";
  }
}



return 0;
}
