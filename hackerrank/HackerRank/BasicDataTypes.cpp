// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include<bits/stdc++.h>
#include<cstdio>

using namespace std;


int main()
{

ios::sync_with_stdio(0);
cin.tie(0);

int integer;
long longInteger;
char character;
float decimal;
double longdecimal;

scanf("%d %ld %c %f %lf", &integer, &longInteger, &character, &decimal, & longdecimal);
printf("%d\n%ld\n%c\n%f\n%lf\n",integer,longInteger,character,decimal,longdecimal);
// %s for stirngs
return 0;
}
