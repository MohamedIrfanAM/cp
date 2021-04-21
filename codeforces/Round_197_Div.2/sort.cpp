#include<iostream>

using namespace std;

int main()
{
  int nums[] = {9,12,18,8,5,4,36,68};

  for(int i =0; i< 8; i++)
  {
    int temp = nums[i];
    for (int j =i-1 ; j >=  0; j--)
    {
      if(temp <= nums[j])
      {
       nums[j+1] = nums[j]; 
       nums[j] = temp;
      }
    }
  }
  for( int i = 0; i < 8 ; i++)
  {
    cout << nums[i] << " ";
  }
}
