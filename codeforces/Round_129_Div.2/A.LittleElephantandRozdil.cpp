// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/205/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
long long  n;
cin  >> n;
long long  city[n];
for(int i =0; i < n; i++)
{
  cin >> city[i];
}
int mini;
int min = *min_element(city,city+n);

for(int i =0; i < n; i++)
{
  if(city[i] == min)
  {
   mini = i;
  }
}


sort(city,city+n);
if(n > 1 && city[0] == city[1])
{
  cout << "Still Rozdil";
  exit(0);
}
else
{
  cout << mini+1 ;
}
return 0;
}
