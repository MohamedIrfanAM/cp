// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1523/B
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
  vector<int> v(n);

  for(int i =0 ; i < n;i++)
  {
    cin >> v[i];
  }

  cout << n*3 << "\n";
  for(int i = 0; i < n; i+=2)
  {
    for(int j = 0; j < 6; j++)
    {
      int type;
      if(j % 2 == 0) type = 2; 
      else type = 1;

      cout << type << " " <<  i+1  << " " <<i+2 << "\n";
    }
  }

}

return 0;
}
