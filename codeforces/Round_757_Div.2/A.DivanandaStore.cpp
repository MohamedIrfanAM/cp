// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1614/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);


int t;
cin >> t;

int n,l,r,k;

while(t--)
{

  cin >> n >> l >> r >> k;

  long int price[n];
  int num = 0;
  long long int sum = 0;

  for(int i = 0; i < n; i++)
  {
    cin >> price[i];
  }


  sort(price,price+n);

  for(int i = 0; i < n; i++)
  {
    if(price[i] <= r && price[i] >= l && (sum+price[i]) <= k)
    {
      num++;
      sum += price[i];
    }
    else if(sum+price[i] > k)
    {
      break;
    }
    
  }
  cout << num << endl;

}

return 0;
}
