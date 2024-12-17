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

// O(1) solution, exception we can't delete the last element becauase we are not provided with the head
class Solution
{
public:
  void deleteNode(ListNode *node)
  {
    ListNode *current = node;
    current->val = current->next->val;
    current->next = current->next->next;
    // delete (node);
  }
};

// O(n) solution
// class Solution
// {
// public:
//   void deleteNode(ListNode *node)
//   {
//     ListNode *current = node;
//     while (current->next != NULL)
//     {
//       current->val = current->next->val;
//       if (current->next->next == NULL)
//       {
//         current->next = NULL;
//         break;
//       }
//       current = current->next;
//     }
//     // delete current;
//   }
// };