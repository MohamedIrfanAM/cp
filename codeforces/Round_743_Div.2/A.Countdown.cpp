// time-limit: 1000
// problem-url: https://codeforces.com/contest/1573/problem/A
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
  string s;
  cin >> s;

  int arr[n];
  int sum = 0;

  for(int i = 0; i < n; i++)
  {
    arr[i] = int(s[i])-48;
    sum += arr[i];
  }
  for(int i = 0; i < n; i++)
  {
    if(arr[i] != 0 && i != n-1)
    {
      sum += 1;
    }
  }
  cout << sum << "\n";
}



return 0;
}
