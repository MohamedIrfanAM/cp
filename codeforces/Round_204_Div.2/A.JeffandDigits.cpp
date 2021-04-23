// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/352/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int n;
cin >> n;
int nums[n];
int five = 0;

for(int i = 0; i < n; i++)
{
  cin >> nums[i];
  if(nums[i] == 5)
  {
    five++;
  }
}
int sum = 5*five;
int zero = n-five;

if(zero == 0 )
{
  cout << -1;
  exit(0);
}
if(sum < 45)
{
  cout << 0;
  exit(0);
}

if(sum%9 == 0)
{
  sort(nums, nums+n);
  reverse(nums, nums+n);
  for( int i = 0; i < n ; i ++ )
  {
    cout << nums[i];
  }
    exit(0);
}
else
{
  while(sum%9 != 0)
  {
    five--;
     sum = sum-5;
  }

for(int i =0; i < five; i++)
{
  cout << 5;
}
for(int i =0; i < zero; i++)
{
  cout << 0;
}
}
return 0;
}
