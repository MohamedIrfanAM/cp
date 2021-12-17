// time-limit: 1000
// problem-url: https://codeforces.com/contest/1591/problem/A
#include<bits/stdc++.h>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t;
cin >> t;
while(t--)
{
  int n;
  cin>> n;

  int arr[n];
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int h = 1;
  if(arr[0] == 1)
  {
    h += 1;
  }
  for (int i = 1; i < n; i++)
  {
   if(arr[i] == 0 ) 
   {
     if(arr[i-1] == 1)
     {
       continue; 
     }
     else
     {
       h = -1;
       break;
     }
   }
   if(arr[i] == 1)
   {
     if(arr[i-1] == 0)
     {
       h++;
     }
     else
     {
       h += 5;
     }
   }

  }
  cout << h << "\n";
  
}



return 0;
}
