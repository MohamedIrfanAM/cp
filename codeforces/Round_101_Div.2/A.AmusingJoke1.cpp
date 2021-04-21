// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/141/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
string guest;
string host;
string a;
cin >> guest;
cin >> host;
string b = guest+host;
int counta = 0;
int countb = 0;
bool nocount = true;

cin >> a;

if( b.length() > a.length())
{
  cout << "NO";
}
else if (b.length() < a.length())
{
  cout << "NO";
}
else
{
  for( int i = 0; i < a.length(); i++ )
  {
    counta = 0;
    countb =0;
    int temp = 0;
    nocount = true;

    for(int f = i-1; f >= 0; f--)
    {
      if(b[i] == b[f])
      {
        nocount = false;
      }
    }


    if(nocount == true)
    {
      for(int k = 0; k < a.length(); k++)
      {
        if(b[i] == a[k])
        {
          temp = k; 
          break;
        }
      }

     
      for(int x = i+1; x < b.length(); x++)
      {
        if(b[i]==b[x])
        {
          countb++;
        }
      }
      
      for(int x = temp + 1; x < a.length(); x++)
      {
        if(a[temp]==a[x])
        {
          counta++;
        }
      }

      if( counta != countb )
      {
        cout << "NO";
        exit(0);
      }
    }
  }
  cout << "YES";
  
}

  

return 0;
}
