// time-limit: 2000
// problem-url: https://codeforces.com/contest/1611/problem/C
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
  int arr[n];
  int max = 0;

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }


  if(arr[0] == n || arr[n-1] == n)
  {
    for(int i = n-1; i >= 0; i--)
    {
      cout << arr[i] << ' ';
    }
    cout << '\n';
  }
  else
  {
    cout << "-1\n";
  }
}


return 0;
}
