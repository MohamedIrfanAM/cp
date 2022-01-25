// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1537/C
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
  vector<int> h(n);

  for(auto &x: h)
  {
    cin >> x;
  }

  sort(h.begin(),h.end()) ;

  int mindiff = INT_MAX;
  int minpos = 0;

  for(int i = 0 ; i+1 < n; i++)
  {
    int diff = h[i+1]-h[i];
    if(diff < mindiff)
    {
      mindiff = diff;
      minpos = i;
    }
  }

  vector<int> less;
  cout << h[minpos] << " ";
  for(int i = 0; i < n; i++)
  {
    if(i != minpos && i != minpos+1 && h[i] > h[minpos+1])
    {
      cout << h[i] << " ";
    }
    else if(i != minpos && i != minpos+1 && h[i] <= h[minpos+1] )
    {
      less.push_back(h[i]);
    }
  }
  for(auto &x : less)
  {
    cout << x <<" ";
  }
  cout << h[minpos+1] << "\n";

}

return 0;
}
