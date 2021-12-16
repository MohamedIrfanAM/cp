// time-limit: 2000
// problem-url: https://codeforces.com/contest/1618/problem/C
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
  int n;
  cin >> n;

  vector <long long int> a;
  vector <long long int> b;

  for(int i = 1; i <= n; i++)
  {
    long long int temp;
    cin >> temp;
    if(i%2 == 0)
    {
      a.push_back(temp);
    }
    else
    {
      b.push_back(temp);
    }
  }


  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  
  long long int amax = a.back();
  long long int amin = a.front();

  long long int bmax = b.back();
  long long int bmin = b.front();
  long long int ans = 0;

  bool found = false;
  bool notfound = false;
  for(int i = amin; i <= amax; i += amin)
  {
    notfound = false;
    for(long long int k:a)
    {
      if(k%i == 0)
      {
        if(k == amax)
        {
          for(long long int l:b)
          {
            if(l%i == 0)
            {
              notfound = true;
              break;
            }
            else if(l%i != 0 && l == bmax)
            {
              ans = i;
              found = true;
              break;
            }
          }
          if(found)
          {
            break;
          }
          if(notfound)
          {
            break;
          }
        }
        else
        {
          continue;
        }
      }
      else if(k%i != 0)
      {
        break;
      }
      if(notfound)
      {
        continue;
      }
    }
    if(found)
    {
      break;
    }
  }
  if(found)
  {
    cout << ans << '\n';
    continue;
  }


  found = false;
  
  for(int i = bmin; i <= bmax; i += bmin)
  {
    notfound = false;
    for(long long int k:b)
    {
      if(k%i == 0)
      {
        if(k == bmax)
        {
          for(long long int l:a)
          {
            if(l%i == 0)
            {
              break;
            }
            else if(l%i != 0 && l == amax)
            {
              ans = i;
              found = true;
              break;
            }
          }
          if(found)
          {
            break;
          }
          if(notfound)
          {
            break;
          }
        }
        else
        {
          continue;
        }
      }
      else if(k%i != 0)
      {
        break;
      }
      if(notfound)
      {
        continue;
      }
    }
    if(found)
    {
      break;
    }
  }
  if(found)
  {
    cout << ans << "\n";
  }
  else
  {
    cout << 0 << "\n";
  }
    
}



return 0;
}
