// time-limit: 1000
// problem-url: https://codeforces.com/contest/1560/problem/C
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

  long long int k;
  cin >> k;
  long long int a = 1,b = 1;

  if(k == 1)
  {
    cout << "1 1\n";
    continue;
  }

  long long int n = 0;
  long long int r = 1,c =1;
  bool found = false;

  for (long long int i = 2; i <= k; i++)
  {
    a += 1+((i-2)*2);
    b = i*i;

    if( k == b )
    {
      r = i;
      found = true;
      break;
    }
    else if( k == a )
    {
      c = i;
      found = true;
      break;
    }
    else if( k > a && k < b )
    {
      n = i;
      break;
    }
  }
  if(found)
  {
    cout << r << " " << c << "\n";
    continue;
  }
  

  if( (k-a) <= n-1 )
  {
    c = n;
  }
  else
  {
    c = b-k+1;
  }
  if((b-k) <= n-1)
  {
    r = n;
  }
  else
  {
    r = k - a +1;
  }
  
  cout << r << " " << c << "\n";
}



return 0;
}
