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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    int c = 0;
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while (l1 != NULL && l2 != NULL)
    {
      int x = l1->val + l2->val + c;
      c = x / 10;
      if (head == NULL)
      {
        head = new ListNode(x % 10);
        tail = head;
      }
      else
      {
        auto n = new ListNode(x % 10);
        tail->next = n;
        tail = n;
      }

      l1 = l1->next;
      l2 = l2->next;
    }

    while (l1 != NULL)
    {
      int x = l1->val + c;
      auto n = new ListNode(x % 10);
      c = x / 10;
      tail->next = n;
      tail = n;
      l1 = l1->next;
    }

    while (l2 != NULL)
    {
      int x = l2->val + c;
      auto n = new ListNode(x % 10);
      c = x / 10;
      tail->next = n;
      tail = n;
      l2 = l2->next;
    }

    if (c > 0)
    {
      auto n = new ListNode(c);
      tail->next = n;
      tail = n;
    }
    return head;
  }
};