// time-limit: 1000
// problem-url: https://codeforces.com/contest/1586/problem/A
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
  for(int i = 2; i <= n/2;i++)
  {
   if(n%i == 0)
   {
      return false;
   }
  }
  return true;
}

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
  int arr[n];
  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  if(!isPrime(sum))
  {
    cout << n << "\n";
    for(int i = 1; i <= n; i++)
    {
      cout << i << " ";
    }
    cout << "\n";
  }
  else
  {
    cout << n-1 << "\n";
    int pos = 0;

    for(int i = 0; i < n; i++)
    {
      if(!isPrime(sum-arr[i]))
      {
        pos = i;
        break;
      }
    }

    for(int i = 0; i < n; i++)
    {
      if(i != pos)
      {
        cout << i+1 << " ";
      }
    }
    cout << "\n";
  }



}



return 0;
}
