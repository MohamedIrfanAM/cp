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

  vector<vector<int>> ans;
  for(int i = n-1; i >= 0; i--)
  {
    int diff = 2*v[i];
    int max_div = 0;
    int pos;

    for(int j = 0; j < n;j++)
    {
      if(diff%v[j] == 0 && j != i ) 
      {
        if(abs(v[j]) > abs(max_div))
        {
          max_div = v[j];
          pos = j;
        }
      }
    }
    
    int first_pos,second_pos,type;
    if( max_div > 0)
    {
      type = 2; 
      second_pos = i;
      first_pos = pos;
    }
    else if ( max_div < 0)
    {
      type = 1;
      first_pos = i;
      second_pos = pos;
    }
    int C = abs(diff/max_div);
    while(C--)
    {
      ans.push_back({type,first_pos+1,second_pos+1});
    }
    v[i] *= -1;
  }

  cout << ans.size() << "\n";
  for(auto a: ans)
  {
    cout << a[0] << " "<< a[1] << " " << a[2] << "\n";
  }
}

return 0;
}
