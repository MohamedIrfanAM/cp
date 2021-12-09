// time-limit: 2000
// problem-url: https://codeforces.com/contest/1613/problem/A
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
  unsigned long long x1,x2;
  int p1,p2;

  cin >> x1 >> p1;
  cin >> x2 >> p2;
  
  p1 -= min(p1,p2);
  p2 -= min(p1,p2);

  if(p1 >= 7)
  {
    cout << ">\n";
  }
  else if(p2 >= 7)
  {
    cout << "<\n";
  }
  else
  {
    for(int i = 0; i < p1 ; i++)
    {
      x1 *= 10;
    }
    for(int i = 0; i < p2 ; i++)
    {
      x2 *= 10;
    }

    if(x1 > x2)
    {
      cout << ">\n";
    }
    else if(x1 < x2)
    {
      cout << "<\n";
    }
    else if(x1 == x2)
    {
      cout << "=\n";
    }
  }
  
}


return 0;
}
