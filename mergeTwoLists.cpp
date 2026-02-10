#include <bits/stdc++.h>

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *insertAtEnd(ListNode *head, int val) {
  ListNode *newNode = new ListNode(val);
  if (head == nullptr) {
    return newNode;
  }
  ListNode *temp = head;
  while (temp->next != nullptr) {
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
  ListNode *it1 = list1;
  ListNode *it2 = list2;
  ListNode *result = nullptr;
  while (it1 && it2) {
    if (it1->val <= it2->val) {
      result = insertAtEnd(result, it1->val);
      it1 = it1->next;
    } else {
      result = insertAtEnd(result, it2->val);
      it2 = it2->next;
    }
  }
  while (it1) {
    result->next = it1;
    it1 = it1->next;
  }
  while (it2) {
    result->next = it2;
    it2 = it2->next;
  }
  return result;
}

int main() { return 0; }
