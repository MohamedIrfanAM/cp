// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1609/B
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst = 1;
while(tst--)
{
  int n,q;
  cin >> n >> q;
  string s ;
  cin >> s;
  int count = 0;
  for(int i = 0; i+2 < n; i++)
  {
    if(s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'c')
    {
      count++;
      i+=2;
    }
  }

  while(q--)
  {
    int pos;
    char sub;
    cin >> pos >> sub;
    pos--;
    if(s[pos] == sub) 
    {
      cout << count << "\n";
    }
    else
    {
      bool alreadyabc = false;
      if( s[pos] == 'a' && pos+2 < n )
      {
        if( s[pos+1] == 'b' && s[pos+2] == 'c')
        {
          alreadyabc = true; 
        }
      }
      else if( s[pos] == 'b' && pos+1 < n && pos-1 >= 0)
      {
        if( s[pos+1] == 'c' && s[pos-1] == 'a')
        {
          alreadyabc = true; 
        }
      }
      else if( s[pos] == 'c' && pos-2 >= 0 )
      {
        if( s[pos-1] == 'b' && s[pos-2] == 'a')
        {
          alreadyabc = true; 
        }
      }
      
      bool canbeabc = false;
      s[pos] = sub;
      if( s[pos] == 'a' && pos+2 < n )
      {
        if( s[pos+1] == 'b' && s[pos+2] == 'c')
        {
          canbeabc = true; 
        }
      }
      else if( s[pos] == 'b' && pos+1 < n && pos-1 >= 0)
      {
        if( s[pos+1] == 'c' && s[pos-1] == 'a')
        {
          canbeabc = true; 
        }
      }
      else if( s[pos] == 'c' && pos-2 >= 0 )
      {
        if( s[pos-1] == 'b' && s[pos-2] == 'a')
        {
          canbeabc = true; 
        }
      }

      if(alreadyabc) count--;
      if(canbeabc) cout << ++count << "\n";
      else cout << count << "\n";


    }

  }
  
}

return 0;
}
