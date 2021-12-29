// time-limit: 1000
// problem-url: https://codeforces.com/contest/1608/problem/B
#include <array>
#include<bits/stdc++.h>
#include <fstream>

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
  int n,a,b;
  cin >> n >> a >> b;

  if( (a+b) > n-2)
  {
    cout << "-1\n";
    continue;
  }
  else if(a > ceil((n-2)/2.0) || b > ceil((n-2)/2.0))
  {
    cout << "-1\n";
    continue;
  }
  else if( abs(a-b) > 1)
  {
    cout << "-1\n";
    continue;
  }

  vector<int> arr;

  for(int i = 1; i <= n; i++)
  {
    arr.push_back(i);
  }
  
  if ( a == b && a == 1)
  {
    swap(arr[0],arr[1]);  
    swap(arr[n-1],arr[n-2]);  
  }
  else if( a == b && a == 0)
  {

  }
  else if( a > b)
  {
    reverse(arr.begin(),arr.end());
    for(int i = 0; i+1 < n; i+=2 )
    {
      swap(arr[i],arr[i+1]);
      if(i == 0)
      {
        a--;
      }
      else 
      {
        b--;
        a--;
      }
      if(a == 0 && b == 0)
      {
        break;
      }
    }
  }
  else if( b > a)
  {
    for(int i = 0; i+1 < n; i+=2 )
    {
      swap(arr[i],arr[i+1]);
      if(i == 0)
      {
        b--;
      }
      else
      {
        b--;
        a--;
      }
      if(a == 0 && b == 0)
      {
        break;
      }
    }
  }
  else if(a == b)
  {
    for(int i = 1; i+1 < n; i+=2 )
    {
      swap(arr[i],arr[i+1]);
        b--;
        a--;
      if(a == 0 && b == 0)
      {
        break;
      }
    }
  }
  
  for(int &a: arr)
  {
    cout << a << " ";
  }

  cout << "\n";
}



return 0;
}
