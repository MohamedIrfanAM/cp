// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1761/B
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
  
  vector<int> v(n);

  for(int &a:v)
  {
    cin >> a;
  }
  
  if(n%2 == 0 && n > 2)
  {
    int count = 0;
    for(int i = 0; i < n; i++)
    {
      if(i%2 == 0)
      {
        if(v[i] == v[0])
        {
          count++;
        }
      }
      else 
      {
        if(v[i] == v[1])
        {
          count++;
        }
      }
    }

    if(count == n)
    {
      cout << (n/2)+1 << "\n";
    }
    else
    {
      cout << n << "\n";
    }
    
  }
  else
  {
    cout << n << "\n";
  }
}

}

