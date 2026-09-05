class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* newHead = nullptr;
        ListNode* tail = nullptr;
        int sum = 0;
        while (temp != nullptr) {
            if (temp->val == 0) {
                if (sum > 0) {
                    ListNode* newNode = new ListNode(sum);
                    if (newHead == nullptr) {
                        newHead = newNode;
                        tail = newNode;
                    } else {
                        tail->next = newNode;
                        tail = newNode;
                    }
                    sum = 0;
                }
            } else {
                sum += temp->val;
            }
            temp = temp->next;
        }
        return newHead;
    }
};