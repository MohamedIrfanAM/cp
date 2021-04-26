// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/230/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int s,n;
cin >> s >> n;

int x[n];
int y[n];

for(int i = 0; i < n; i++)
{
  cin >> x[i] >> y[i];
}

for(int i =0; i< n; i++)
{
  int temp = x[i];
  int temp1 = y[i];
  for (int j =i-1 ; j >=  0; j--)
  {
    if(temp <= x[j])
    {
     x[j+1] = x[j]; 
     x[j] = temp;
     y[j+1] = y[j];
     y[j] = temp1;
    }
  }
}

for(int i = 0; i < n; i++)
{
  if(s > x[i])
  {
    s += y[i];
  }
  else
  {
    cout << "NO";
    exit(0);
  }
}
cout << "YES";
return 0;
}
