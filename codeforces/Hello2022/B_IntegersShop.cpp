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

  int max_element = 0;
  int min_element = INT_MAX;

  int minmoney,maxmoney,money;
  set<vector<int>> s;
  for(int i = 0; i < n; i++) 
  {
    if(arr[i][0] < min_element)
    {
      min_element = arr[i][0];
      minmoney = arr[i][2];
    }
    else if( arr[i][0] == min_element)
    {
      minmoney = min(arr[i][2],minmoney) ;
    }

    if(arr[i][1] > max_element)
    {
      max_element = arr[i][1];
      maxmoney = arr[i][2];
    }
    else if( arr[i][1] == max_element)
    {
      maxmoney = min(arr[i][2],maxmoney);
    }
     
    money = minmoney+maxmoney;
    if(arr[i][0] == min_element && arr[i][1] == max_element)
    {
      money = min(money,arr[i][2]);
    }
    
    s.insert({min_element,-1*max_element,money});
    cout << (*s.begin())[2] << "\n";
  }

}



return 0;
}
