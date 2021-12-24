// time-limit: 1000
// problem-url: https://codeforces.com/contest/1610/problem/B
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
  vector<int> arr(n);

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  if(n == 1 || n == 2)
  {
    cout << "YES\n";
    continue;
  }
  else if(n == 3)
  {
    if(arr[0] != arr[2] && arr[0] != arr[1] && arr[1] != arr[2])
    {
      cout<< "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
      continue;
  }

  int l = 0, r = n-1;
  int a = -1,b = -1;

  while((r-l) > 0)
  {
    if(arr[l] != arr[r] && l != r)
    {
        a = arr[l];
        b = arr[r];
        break;
    }
    l++;
    r--;
  }
  if(a == -1 && b == -1)
  {
    cout << "YES\n";
    continue;
  }

  vector<int> s1,s2,s3,s4;

  for(int i = 0; i < n; i ++)
  {
    if(arr[i] == a )
    {
      s1.push_back(arr[i]);
    }
    else if(arr[i] == b )
    {
      s3.push_back(arr[i]);
    }
    else
    {
      s1.push_back(arr[i]);
      s3.push_back(arr[i]);
    }
  }
  s2 = s1;
  reverse(s2.begin(),s2.end());


  if(s2 == s1)
  {
    cout << "YES\n";
  }
  else
  {
    s4 = s3;
    reverse(s4.begin(),s4.end());
    if(s4 == s3)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  
}



return 0;
}
