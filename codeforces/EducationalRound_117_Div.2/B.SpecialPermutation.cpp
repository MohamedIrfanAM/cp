// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1612/B
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
  int n,a,b;
  cin >> n >> a >> b;
  int fill = (n/2) - 1;

  if(fill > n-a || fill > b-1)
  {
    cout << "-1\n";
    continue;
  }
  if(b > a)
  {
    if(fill > (n-a-1) || fill > (b-1-1))
    {
      cout << "-1\n";
      continue;
    }
  }


  int arr[n];


  if(a > b)
  {
    int j = a;
    for(int i = 0; i < n/2 ; i++)
    {

      if(j != b)
      {
        arr[i] = j;  
      }
      j++; 
    }
    int k =b;
    for(int i = (n/2) ; i < n; i++ )
    {

      if(k != a)
      {
        arr[i] = k; 
      }
      k--;
    }
  }
  else
  {
    int l = b+1;

  }

  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << "\n";
}


return 0;
}
