// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1561/A
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
  vector<int> v(n+1,0);

  for(int i = 1; i <= n;i++)
  {
    cin >> v[i];  
  }


  int start = 2;
  int count = 0;
  while(!is_sorted(v.begin(),v.end()))
  {
    if(start == 1)
    {
      start = 2;
    }
    else
    {
      start = 1;
    }
    for(int i = start; i+1<= n; i+=2)
    {
        if(v[i] > v[i+1]) 
        {
          swap(v[i],v[i+1]);
        }
    }
    count++;
  }
  cout << count << "\n";

}



return 0;
}
