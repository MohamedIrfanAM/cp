// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/80/A
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;

bool isPrime(int c);

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n,m;
int noprime = 0;
int test = 0;
cin >> n >> m;

for(int j =n+1; j < m; j++ )
{
  test++;
  if(!isPrime(m))
  {
    cout << "NO";
    exit(0);
  }
  else if(isPrime(j))
  {
    cout << "NO";
    exit(0);
  }
  else if(!isPrime(j))
  {
   noprime++; 
  }
  
}
if ( m-n == 1 )
{
  if(!isPrime(m))
  {
    cout << "NO";
    exit(0);
  }
  else
  {
    cout << "YES";
  }
  
}
else if(test == noprime)
{
  cout << "YES";
}

return 0;
}


bool isPrime(int c)
{
  int count = 0;

  for ( int i = 2; i <= c/2; i++ )
  {
    if(c%i == 0)
    {
      return 0;
      count = 1;
      break;
    }
  }
  if(count == 0)
  {
    return 1;
  }
  else{
    return 0;
  }
}

