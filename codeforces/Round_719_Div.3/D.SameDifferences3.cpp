// time-limit: 2000
// problem-url: https://codeforces.com/contest/1520/problem/D
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int t; 
cin >> t;
while(t--)
{
  int n;
  cin >> n;
  int a[n];
  int b[n];
  int c = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    b[i] = a[i]-i;
    if(i != 0)
    {
      for(int j = i-1;j >=0 ; j--)
      {
        if(b[i] == b[j])
        {
          c++;
        }
      }
    }
  }
  


  cout << c << "\n";

}


return 0;
}
