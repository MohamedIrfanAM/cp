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

// Differnce in lenghth has to be found first and then we can interate both pointers togethter
class Solution
{
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    auto currenta = headA;
    auto currentb = headB;
    while (currenta != NULL && currentb != NULL)
    {
      currenta = currenta->next;
      currentb = currentb->next;
    }
    int j = 0;
    while (currenta != NULL)
    {
      j++;
      currenta = currenta->next;
    }

    int i = 0;
    while (currentb != NULL)
    {
      i++;
      currentb = currentb->next;
    }

    if (j > 0)
    {
      currenta = headA;
      while (j)
      {
        currenta = currenta->next;
        j--;
      }
      currentb = headB;
      while (currentb != NULL && currenta != NULL)
      {
        if (currentb == currenta)
        {
          return currenta;
        }
        currentb = currentb->next;
        currenta = currenta->next;
      }
      return NULL;
    }
    else
    {
      currentb = headB;
      while (i)
      {
        currentb = currentb->next;
        i--;
      }
      currenta = headA;
      while (currenta != NULL && currentb != NULL)
      {
        if (currentb == currenta)
        {
          return currenta;
        }
        currenta = currenta->next;
        currentb = currentb->next;
      }
      return NULL;
    }
  }
};