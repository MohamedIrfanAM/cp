// time-limit: 1000
// problem-url: https://codeforces.com/contest/1491/problem/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n,q;
cin >> n >> q;
int arr[n];
int one = 0; 
for(int i = 0; i < n; i++)
{
  cin >> arr[i];
  if( arr[i] == 1 )
  {
    one++;
  }
}

for(int i = 0; i < q ; i++)
{
  int t,x;
  cin >> t >> x;

  if(t == 1)
  {
    arr[x-1] = 1-arr[x-1];

    if(arr[x-1] == 0)
    {
      one--;
    }
    else if( arr[x-1] == 1 )
    {
      one++;
    }
  }
  else if(t == 2)
  {
    if(x <= one)
    {
      cout << 1 << "\n";
    }
    else
    {
      cout << 0 << "\n";
    }
  }
}


return 0;
}
