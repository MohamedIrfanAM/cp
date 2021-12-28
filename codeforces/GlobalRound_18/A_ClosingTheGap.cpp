// time-limit: 2000
// problem-url: https://codeforces.com/contest/1615/problem/A
#include<bits/stdc++.h>
#define coutc cout << "\033[48;5;196m\033[38;5;15m" 
#define endlc "\033[0m" << endl; 
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
  vector<int> arr(n);
  int sum = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }

  int diff= 0;
  int avg = sum/n;

  if(avg*n == sum)
  {
    cout << 0 << '\n';
  }
  else
  {
    cout << 1 << "\n";
  }
  // for (int i = 0; i < n; i++)
  // {
  //   diff += (arr[i] - avg);    
  // }
  // if(diff == 0)
  // {
  //   cout << "0\n";
  // }
  // else
  // {
  //   cout << "1\n";
  // }

}



return 0;
}
