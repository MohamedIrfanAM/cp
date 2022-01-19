// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1478/B
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
  int q,d;
  cin >> q >> d;
  vector<int> v(q);

  for(int i = 0; i < q; i++)
  {
    cin >> v[i];
  }
  
  if( d == 1)
  {
    for(int i = 0; i < q; i++)
    {
      cout << "YES\n";
    }
    continue;
  }
  
  for(int a : v)
  {
    if( a >= 10*d)
    {
      cout << "YES\n";
      continue;
    }

    bool lucky = false;
    int a1 = a;
    while( a1 > 0)
    {
      if(a%10 == d)
      {
        lucky = true;
        break;
      }
      else a1/=10;
    }
    if( lucky )
    {
      cout << "YES\n";
      continue;
    }

    for(int i = d; i <= a ; i+=d)
    {
      int num = a - i;
      while( num > 0)
      {
        if(num%10 == d)
        {
          lucky = true;
          break;
        }
        else num/=10;
      }
      if( lucky ) break;
    }

    if( lucky ) cout << "YES\n";
    else cout<< "NO\n";
  }
}

return 0;
}
