// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1609/A
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
  int max = 0;
  int count = 0;
  int sum = 0;
  int n;
  cin >> n;
  int arr[n];


  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];

    if(arr[i] > max)
    {
      max = arr[i]; 
    }
    if(arr[i]%2 == 0)
    {
      count++;
    }
    sum += arr[i];
  }


  if(n == 1 || count == 0)
  {
    cout << sum << '\n';
  }
  else
  {
      sort(arr,arr+n);
      while(count != 0)
      {

        for(int i = 0; i < n-1;i++)
        {
          if(arr[i]%2 == 0)
          {
            sum -= arr[i]/2;
            sum += max;
            if((arr[i]/2)%2 != 0)
            {
              count--;
            }
          }
        }
     }
    cout << sum << '\n';
  }

}



return 0;
}
