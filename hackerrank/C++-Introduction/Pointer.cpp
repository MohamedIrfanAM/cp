// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>

using namespace std;

void update(int *a, int *b)
{
int add = *a + *b;
int diff = abs(*a - *b); 
*a = add;
*b = diff;
}

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int a,b;
int *pa = &a, *pb = &b;

scanf("%d %d",&a,&b);
update(pa,pb);
printf("%d\n%d", a, b);

return 0;
}
