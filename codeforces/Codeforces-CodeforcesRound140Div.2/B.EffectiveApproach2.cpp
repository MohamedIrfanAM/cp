// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/227/B
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int v = 0;
int p = 0;
int n1;
int n;

cin>> n;
int nums[n];

for(int i = 0; i < n ; i++)
{
  cin >> nums[i];
}
  cin >> n1;
  int m[n1];
for(int i = 0; i < n1; i++)
{
  cin >> m[i];
  for(int j = 0; j < n ; j++)
  {
    if(m[i] == nums[j])
    {
     v += j+1;
     p += (n-j);
    }
  }
}
cout << v << " " << p;
return 0;
}
