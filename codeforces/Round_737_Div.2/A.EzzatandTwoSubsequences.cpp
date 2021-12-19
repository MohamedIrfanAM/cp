// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1557/A
#include<bits/stdc++.h>

using namespace std;


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
  cin  >> n;
  vector<double> v;
  
  for(int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(),v.end());
  
  double sum = 0;
  for(int i = 0; i < n-1; i++)
  {
    sum += v[i];
  }
  cout << fixed  << setprecision(9)<< (v[n-1] + (sum/double(n-1))) <<  "\n";
}



return 0;
}
