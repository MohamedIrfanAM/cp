#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *middleNode(ListNode *head)
  {
    auto current = head;
    int l = 0;
    while (current != NULL)
    {
      l++;
      current = current->next;
    }
    int r = 0;
    current = head;
    while (current != NULL)
    {
      if (r == l / 2)
      {
        return current;
      }
      r++;
      current = current->next;
    }
    return NULL;
  }
};