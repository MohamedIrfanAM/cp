// time-limit: 1000
// problem-url: https://codeforces.com/contest/1559/problem/A
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
  long long  arr[n];
  for (int i = 0; i < n; ++i) 
  {
     cin >> arr[i]; 
  }
  long long  max = arr[0];


  for (int i = 0; i < n; ++i) 
  {
    max &= arr[i];
  }
    
  cout << max << "\n";
}



return 0;
}
