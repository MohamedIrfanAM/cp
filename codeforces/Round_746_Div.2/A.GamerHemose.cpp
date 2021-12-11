// time-limit: 1000
// problem-url: https://codeforces.com/contest/1592/problem/A
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
  long long int n,H;
  cin >> n >> H;

  int arr[n];

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr,arr+n);
  long long max = arr[n-1];
  long long smax = arr[n-2];
  long int count = 0;
  long int mov =H/(max+smax); 

  count = H%(max + smax);
  if(count == 0)
  {
    cout << 2*mov << "\n";
  }
  else if(count <= max)
  {
    cout << (2*mov)+1 << "\n";
  }
  else if(count > max)
  {

    cout << (2*mov)+2 << "\n";
  }

}



return 0;
}
