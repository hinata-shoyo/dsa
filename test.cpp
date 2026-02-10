#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int num1 = 0, num2 = 0;
    ListNode *result = nullptr;
    while (l1 != nullptr) {
      num1 += deleteLast(l1);
      num1 *= 10;
    }
    while (l2 != nullptr) {
      num2 += deleteLast(l2);
      num2 *= 10;
    }
    num1 /= 10;
    num2 /= 10;
    int sum = num1 + num2;
    while (sum != 0) {
      int val = sum % 10;
      if (result == nullptr) {
        result = new ListNode(val);
        sum /= 10;
      } else {
        result->next = new ListNode(val);
        sum /= 10;
      }
    }
    return result;
  }

  int deleteLast(ListNode *&li) {
    int last;
    if (li->next == nullptr) {
      last = li->val;
      delete li;
      li = nullptr;
      return last;
    } else {
      ListNode *lastNode;
      ListNode *temp = li;
      while (temp->next->next != nullptr) {
        temp = temp->next;
      }
      lastNode = temp->next;
      last = lastNode->val;
      delete lastNode;
      temp->next = nullptr;
      return last;
    }
  }
};

bool isPalindrome(int n) {
  if (n < 0)
    return false;
  int reverse = 0;
  int original = n;
  while (n != 0) {
    int rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n / 10;
  }
  if (reverse == original) {
    return true;
  }
  return false;
}

int main() {
  ListNode *li = new ListNode(34);
  // li->next = new ListNode(30);
  Solution s;
  cout << s.addTwoNumbers(li, li);
  // cout << " " << li;

  return 0;
}
