#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  if (!list1 && !list2)
    return nullptr;
  if (list1 == nullptr)
    return list2;
  if (list2 == nullptr)
    return list1;
  ListNode *t1 = list1;
  ListNode *t2 = list2;
  ListNode *h = new ListNode();
  ListNode *p = h;
  while (t1 != nullptr && t2 != nullptr) {
    if (t1->val == t2->val) {
      p->next = t1;
      p->next->next = t2;
      t1 = t1->next;
      t2 = t2->next;
      p = p->next->next;
    } else if (t1->val < t2->val) {
      p->next = t1;
      t1 = t1->next;
      p = p->next;
    } else if (t1->val > t2->val) {
      p->next = t2;
      t2 = t2->next;
      p = p->next;
    }
  }
  if (t1 != nullptr)
    p->next = t1;
  if (t2 != nullptr)
    p->next = t2;

  return h->next;
}

int main() {
  ListNode *t1 = new ListNode(4);
  ListNode *e11 = new ListNode(2, t1);
  ListNode *h1 = new ListNode(1, e11);
  ListNode *t2 = new ListNode(4);
  ListNode *e21 = new ListNode(3, t2);
  ListNode *h2 = new ListNode(1, e21);

  ListNode *n = mergeTwoLists(h1, h2);

  return 0;
}