// time-limit: 2000
// problem-url: https://codeforces.com/contest/1618/problem/B
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
  string arr[n-2];

  for (int i = 0; i < n-2; i++)
  {
    cin >> arr[i];
  }


  bool found = false;
  cout << arr[0];
  for (int i= 1;  i < n-2; i++)
  {
    if(arr[i][0] == arr[i-1][1])
    {
      cout << arr[i][1];
    }
    else
    {
      cout << arr[i][0] << arr[i][1];
      found = true;
    }
  }
  if(!found)
  {
    cout << arr[n-3][1];
  }
  cout << "\n";

}



return 0;
}
