// time-limit: 2000
// problem-url: https://codeforces.com/contest/1490/problem/B
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
int c1 = 0;
int c0 = 0;
int c2 = 0;
cin >> n;
int nums[n];

for(int i = 0; i < n; i++)
{
  cin >> nums[i];
  if(nums[i]%3 == 0)
  {
    c0++;
  }

  if(nums[i]%3 == 1)
  {
    c1++;
  }
  if(nums[i]%3 == 2)
  {
    c2++;
  }

}

/* cout << c0 << " " << c1 <<" " << c2 << "\n"; */



return 0;
}
