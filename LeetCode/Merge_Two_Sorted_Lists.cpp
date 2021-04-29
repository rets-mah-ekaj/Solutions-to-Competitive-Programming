class Solution {
public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (l1 == NULL)
      return l2;
    if (l2 == NULL)
      return l1;
    ListNode *l3 = NULL, *temp;
    if (l1->val < l2->val) {
      l3 = l1;
      l1 = l1->next;
    }
    else {
      l3 = l2;
      l2 = l2->next;
    }
    temp = l3;
    while (l1 && l2) {
      if (l1->val < l2->val) {
        temp->next = l1;
        l1 = l1->next;
      }
      else {
        temp->next = l2;
        l2 = l2->next;
      }
      temp = temp->next;
    }
    if (l1)
      temp->next = l1;
    if (l2)
      temp->next = l2;
    return l3;
  }
};
