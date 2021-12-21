// time-limit: 1000
// problem-url: https://codeforces.com/contest/1549/problem/B
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
  int n;
  cin >> n;

  string enemy;
  cin >> enemy;
  string s;
  cin >> s;

  int count = 0;

  for(int i = 0; i < n; i++)
  {
    if(s[i] == '1')
    {
      if( enemy[i] == '0' )
      {
        count++;
      }
      else if(enemy[i] == '1')
      {
        if( i != 0 && i != (n-1))
        {
          if(enemy[i-1] == '1')
          {
           count++; 
           enemy[i-1] = '0';
          }
          else if(enemy[i+1] == '1')
          {
            count++;
            enemy[i+1] = '0';
          }
        }
        else if( i == 0 )
        {
          if(enemy[i+1] == '1' )
          {
            count++;
            enemy[i+1] = '0';
          }
        }
        else if( i == (n-1) )
        {
          if(enemy[i-1] == '1' )
          {
            count++;
            enemy[i-1] = '0';
          }
        }
      }
    }
  }

  cout << count << "\n";
  
}



return 0;
}
