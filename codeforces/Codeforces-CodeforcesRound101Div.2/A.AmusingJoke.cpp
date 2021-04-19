// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/141/A
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string s4 = s1+s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
   if(s3==s4)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
return 0;
}
