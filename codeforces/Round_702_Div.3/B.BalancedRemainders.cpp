// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1490/B
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
  int nums;
  int k = n/3;
  int c = 0;
  int c1  = 0, c2 = 0, c0 = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> nums;
    if(nums%3 == 0)
    {
      c0++;
    }
    else if(nums%3 == 1)
    {
      c1++;
    }
    else if(nums%3 == 2)
    {
      c2++;
    }
  }


  if(c0 != k)
  {
    if(c0 > c1 && c1 != k)
    {
      int x = 1*(((c0-c1)-((c0-c1)%2))/2);
      c += x; 
      c0 -= x; 
      c1 += x;
    }
    if(c0 > c2 && c2 != k)
    {
      int y = 2*(((c0-c2)-((c0-c2)%2))/2); 
      c += y;
      c0 -= y/2; 
      c2 += y/2;
    }
  }
  cout << c0 << c1 << c2 << "\n";
  if(c1 != k)
  {
    if(c1 > c0 && c0 !=k)
    {
      int x = 2*(((c1-c0)-((c1-c0)%2))/2);
      c += x; 
      c1 -= x/2; 
      c0 += x/2;
    }
    if(c1 > c2 && c2 != k)
    {
      int y = 1*(((c1-c2)-((c1-c2)%2))/2); 
      c += y;
      c1 -= y; 
      c2 += y;
    }
  }
  if(c2 != k)
  {
    if(c2 > c1 && c1 != k)
    {
      int x = 2*(((c2-c1)-((c2-c1)%2))/2);
      c += x; 
      c2 -= x/2; 
      c1 += x/2;
    }
    if(c2 > c0 && c0 != k)
    {
      int y = 1*(((c2-c0)-((c2-c0)%2))/2); 
      c += y;
      c2 -= y; 
      c0 += y;
    }
  }

  /* cout << c << "\n"; */

}

return 0;
}
