// time-limit: 4000
// problem-url: https://codeforces.com/contest/1520/problem/C
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t;
cin >>t;
while(t--)
{
  int n;
  cin >> n;
  if(n==2)
  {
    cout << "-1\n";
  }
  else
  {
    
    int count = 0;
    for(int i = 1; i <= n*n; i++)
    {
      if( i%2 == 1 )
      {
        cout << i ;
        if(i != n*n )
        {
          cout << " ";
        }
        else if(count != n && i != n*n)
        {
          cout << " ";
        }
        count++;
      }
      if(count == n)
      {
        cout << "\n";
        count = 0;
      }
    }
   
    if(n != 1)
    {
      cout << " ";
    }

    for(int i = 1; i <= n*n; i++)
    {
      if( i%2 == 0 )
      {
        cout << i ;
        if(i != n*n )
        {
          cout << " ";
        }
        else if(count != n && i != n*n)
        {
          cout << " ";
        }
        count++;
      }
      if(count == n)
      {
        cout << "\n";
        count = 0;
      }
    }

  }
    
}

return 0;
}
