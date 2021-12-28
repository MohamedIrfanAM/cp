// time-limit: 2000
// problem-url: https://codeforces.com/contest/1615/problem/B
#include<bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);


int size = 200001;
int hsh[19][200001] = {0};



for(int i = 0; i < 19 ; i++)
{
  int num = 1<<i;
  for(int j = 1; j < size; j++)
  {
    if(num&j )
    {
      hsh[i][j] = hsh[i][j-1] + 1;
    }
    else if((num&j) == 0)
    {
      hsh[i][j] = (hsh[i][j-1]);
    }
  }
}


int tst;
cin >> tst;
while(tst--)
{
  int l,r;
  cin >> l >> r;

  int ans = -1;

  for(int i = 0; i < 19; i++)
  {
    int cnt = hsh[i][r] - hsh[i][l-1];
    if(cnt > ans)
    {
      ans = cnt;
    }
  }
  cout << (r-l+1) - ans << "\n";

}



return 0;
}
