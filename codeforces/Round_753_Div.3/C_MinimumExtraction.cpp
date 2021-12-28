// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1607/C
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
  int n,k;
  cin >> n ;
  vector<int> arr(n);

  for(int i = 0; i <n ; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(),arr.end());
 
  vector <int> ans;

  int diff = 0;

  for(int i = 0; i < n; i++)
  {
    ans.push_back((arr[i]-diff));
    diff += (arr[i]-diff);
  }

  cout << *max_element(ans.begin(),ans.end()) << "\n";
  
}



return 0;
}
