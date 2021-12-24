// time-limit: 1000
// problem-url: https://codeforces.com/contest/1591/problem/B
#include<bits/stdc++.h>

using namespace std;

int findmax(int pos,int val,vector <int>&vec)
{
  for(int i = pos+1; i < vec.size() ; i++)
  {
    if(vec[i] > val)
    {
      return vec[i];
    }
  }
  return -1;
}

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
   
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int max = *max_element(v.begin(),v.end()); 
  int count = 1;
  reverse(v.begin(),v.end()); 

  if(v[0] == max)
  {
    cout << "0\n";
    continue;
  }
  int lastmax = v[0];

  for(int i = 1; i < n; i++)
  {
    if(v[i] != max)
    {
      if(v[i] > lastmax)    
      {
        count++;
        lastmax = v[i];
      }
    }
    else
    {
      break;
    }
  }
  cout << count << "\n";

  
}



return 0;
}
