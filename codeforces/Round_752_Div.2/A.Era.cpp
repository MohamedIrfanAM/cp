// time-limit: 1000
// problem-url: https://codeforces.com/contest/1604/problem/A
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
  int arr[n+1];

  for(int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  
  int current = 0;
  int operations = 0;

  for(int i = 1; i <= n; i++)
  {
    if(arr[i] > (current+i))
    {
      operations += arr[i] - (current+i);
      current = operations;

    }
  }

  cout << operations << "\n";
}


return 0;
}
