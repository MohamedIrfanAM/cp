// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1530/C
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
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(auto &x : a)
  {
    cin >> x;
  }
  for(auto &x : b)
  {
    cin >> x;
  }
  

  sort(a.rbegin(),a.rend());
  sort(b.rbegin(),b.rend());

  bool found = false;
  int count = n - (n/4);
  vector<int> hsh(n+1);
  int sum1 = 0,sum2 = 0;

  for(int i = 0; i < n; i++)
  {
    hsh[i+1] = hsh[i]+a[i];
    sum2 += b[i];
    if(count == i+1)
    {
      if(sum2 <= hsh[i+1])
      {
        found = true;
        break;
      }
    }
  }
  if(found)
  {
    cout << "0\n";
    continue;
  }
   
  sum1 = 0;
  int additional_stages = 0;
  for(int i = n+1; i <= 2*n; i++)
  {
    additional_stages = i-n;
    int extra = additional_stages*100;
    int num = i-(i/4);
    sum1 = extra + hsh[max(num-additional_stages,0)];
    if(sum1 >= sum2) break;
  }
  cout << additional_stages << "\n";

}

return 0;
}
