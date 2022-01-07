// time-limit: 2000
// problem-url: https://codeforces.com/contest/1621/problem/B
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
  vector<vector<int>> arr(n);

  for(int i = 0 ; i< n; i++)
  {
    int x,y,z;
    cin >> x >> y >> z;
    arr[i] = {x,y,z};
  }

  int max = 0;
  int minelement = INT_MAX;
  vector<pair<int,pair<int,int>>>maxmin;

  int minmoney,maxmoney,money;
  for(int i = 0; i < n; i++) 
  {
    if(arr[i][0] < minelement)
    {
      minelement = arr[i][0];
      minmoney = arr[i][2];
    }
    else if( arr[i][0] == minelement)
    {
      minmoney = min(arr[i][2],minmoney) ;
    }

    if(arr[i][1] > max)
    {
      max = arr[i][1];
      maxmoney = arr[i][2];
    }
    else if( arr[i][1] == max)
    {
      maxmoney = min(arr[i][2],maxmoney);
    }
     
    money = minmoney+maxmoney;
    if(arr[i][0] == minelement && arr[i][1] == max)
    {
      money = min(money,arr[i][2]);
    }

    maxmin.push_back({money,{max,minelement}});
      cout << "\033[48;5;196m\033[38;5;15m" << money << " " <<  minmoney  << " " << maxmoney << " "<< max << " " << minelement <<  "\033[0m" << endl;
  }

  for(int i = 0; i < n; i++)
  {
      cout << maxmin[i].first << "\n";
  }

}



return 0;
}
