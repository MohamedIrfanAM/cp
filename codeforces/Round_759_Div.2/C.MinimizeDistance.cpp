// time-limit: 1000
// problem-url: https://codeforces.com/contest/1591/problem/C
#include<bits/stdc++.h>

using namespace std;

long int find_distance(vector<long long int> arr,long long int k)
{

  long long int round = 0;
  long long int d  = 0;
  long long int curr = 0;

  if(arr.size()%k == 0)
  {
    round = arr.size()/k;
  }
  else
  {
    round = (arr.size()/k)+1;
  }
  
  for(long long int i = 0; i < round; i++) 
  {

    for (long long int j =0 ; j < k; j++)
    {
        if(arr.size() != 0)
        {
          d += abs(arr.back() - curr);
          curr = arr.back();
          arr.pop_back();
        }
    }
    d += curr;
    curr = 0;
  }
  return d;
}


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  long long int n,k;
  cin >> n >> k;
  vector<long long int> a;
  vector<long long int> b;

  
  for(long long int i = 0; i < n; i++)
  {
      long int temp;
      cin >> temp;
      if(temp >= 0)
      {
        a.push_back(temp);
      }
      else
      {
        b.push_back(abs(temp)) ;
      }
  }
  
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  long long int extreme = 0;
  if(a.size() == 0 && b.size() != 0)
  {
    extreme = b.back();
  }
  else if(b.size() == 0 && a.size() != 0)
  {
    extreme = a.back();
  }
  else if(a.size() != 0 && b.size() != 0)
  {
    extreme = max(a.back(),b.back());
  }
  
  long int result = 0;

  if(a.size() != 0)
  {
    result += find_distance(a,k);
  }
  if(b.size() != 0)
  {
    result += find_distance(b,k);
  }
  result -= extreme;
  cout << result << "\n";
  
}


return 0;
}
