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

// Traversing the linkedlist while storing nth previous element from the current, when the current reaches end it will be nth previous from end
class Solution
{
public:
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    auto current = head;
    auto d = head;

    for (int i = 0; i < n; i++)
    {
      current = current->next;
    }
    ListNode *prev = NULL;
    while (current != NULL)
    {
      current = current->next;
      prev = d;
      d = d->next;
    }

    if (prev == NULL)
    {
      head = head->next;
    }
    else
    {
      prev->next = d->next;
    }
    delete d;
    return head;
  }
};

// Size based approach
// class Solution
// {
// public:
//   ListNode *removeNthFromEnd(ListNode *head, int n)
//   {
//     auto current = head;
//     int size = 0;
//     while (current != NULL)
//     {
//       size++;
//       current = current->next;
//     }
//     current = head;
//     int t = 0;
//     ListNode *prev = NULL;
//     while (current != NULL)
//     {
//       t++;
//       if (size - t + 1 == n)
//       {
//         if (prev == NULL)
//         {
//           head = head->next;
//         }
//         else
//         {
//           prev->next = current->next;
//         }
//         delete current;
//         break;
//       }
//       prev = current;
//       current = current->next;
//     }
//     return head;
//   }
// };