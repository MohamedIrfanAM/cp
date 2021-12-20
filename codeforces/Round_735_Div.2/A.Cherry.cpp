// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1554/A
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
  vector <long long int> v;
  vector <long long > pr;

  for(int i = 0; i < n; i++)
  {
    long long temp;
    cin >> temp;
    v.push_back(temp);
    if(i != 0)
    {
      long long product = temp*v[i-1]; 
      pr.push_back(product);
    }
  }
  sort(pr.begin(),pr.end()); 
  cout << *(pr.end()-1) << "\n";

}



return 0;
}
