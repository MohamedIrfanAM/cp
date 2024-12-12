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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode *ans = NULL;
    ListNode *tail = NULL;

    auto insert = [&](int val)
    {
      ListNode *n = new ListNode(val);
      if (ans == NULL)
      {
        ans = n;
        tail = n;
      }
      else
      {
        tail->next = n;
        tail = n;
      }
    };

    while (list1 != NULL && list2 != NULL)
    {
      if (list1->val < list2->val)
      {
        insert(list1->val);
        list1 = list1->next;
      }
      else
      {
        insert(list2->val);
        list2 = list2->next;
      }
    }
    while (list1 != NULL)
    {
      insert(list1->val);
      list1 = list1->next;
    }

    while (list2 != NULL)
    {
      insert(list2->val);
      list2 = list2->next;
    }
    return ans;
  }
};