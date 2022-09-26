// time-limit: 1500
// problem-url: https://codeforces.com/contest/1705/problem/B
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
  vector<int> arr(n);
  long long int sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  sum -= arr[n-1];
  
  bool dirt = 0;
  for(int i = 0; i < n-1; i++)
  {
    if(arr[i]) 
    {
      dirt = 1;
    }
    else if(dirt)
    {
      sum++;
    }
  }
  cout << sum << "\n";
}

return 0;
}
