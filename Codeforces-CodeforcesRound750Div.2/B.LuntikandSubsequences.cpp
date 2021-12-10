// time-limit: 1000
// problem-url: https://codeforces.com/contest/1582/problem/B
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
  int one = 0;
  int zero = 0;

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if(arr[i] == 0)
    {
      zero++;
    }
    else if(arr[i] == 1)
    {
      one++;
    }
  }


  if(one == 0)
  {
    cout << 0 << "\n";
  }
  else
  {
    long long int sum = pow(2,zero)*one;
    cout << sum << "\n";
  }
}



return 0;
}
