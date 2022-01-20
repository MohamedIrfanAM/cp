// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1472/C
#include<bits/stdc++.h>

using namespace std;

int find_sum(vector<int> &v , map<int,int> &sums, int pos,int n)
{
  if(sums[pos]) 
  {
    return sums[pos];
  }
  
  if(pos+v[pos] < n)
  {
    sums[pos] = v[pos] + find_sum(v,sums,v[pos]+pos,n);
  }
  else
  {
    sums[pos] = v[pos];
  }
  return sums[pos];
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int tst;
cin >> tst;
while(tst--)
{
  int n;
  cin >> n;
  vector<int> v(n);
  map<int,int> sums;

  for(int i = 0; i< n;i++)
  {
    cin >> v[i];
  }
  
  int max = 0;
  for(int i = 0; i < n;i++)
  {
    int num = find_sum(v,sums,i,n);
    if(num > max)
    {
      max = num;
    }
  }
  cout << max << "\n";

}


return 0;
}
