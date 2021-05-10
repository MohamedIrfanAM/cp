// time-limit: 4000
// problem-url: https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int num, a , b, c, d;
cin >> num;
int nums[num]; 


for(int k = 0; k < num ; k++)
{
  cin >> nums[k] ;
  cout << "";
}


for(int i = (num - 1) ; i >= 0 ; i --)
{
  cout << nums[i] << " ";
}
    return 0;
}
