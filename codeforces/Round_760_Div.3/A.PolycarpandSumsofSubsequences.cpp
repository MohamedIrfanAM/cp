// time-limit: 1000
// problem-url: https://codeforces.com/contest/1618/problem/0
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
  long long int arr[7];
  long long int  sum = 0;
  for(int i = 0; i < 7; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  cout << arr[0] << " " ;
  
  long long int  subsum = (sum/4)-arr[0];

  
  for(int i = 1; i < 7-1; i++)
  {
    for(int j = i+1; j < 7; j++ )
    {
      if(arr[i]+arr[j] == subsum)
      {
        cout << arr[i] << " " << arr[j] << "\n";
        break;
      }
    }
  }
}



return 0;
}
