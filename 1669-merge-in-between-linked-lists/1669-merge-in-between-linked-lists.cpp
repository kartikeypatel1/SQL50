/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* aThNode = list1;
        for (int i = 0; i < a - 1; i++) {
            aThNode = aThNode->next;
        }

        ListNode* bThNode = aThNode;
        for (int i = a - 1; i <= b; i++) {
            bThNode = bThNode->next;
        }

        ListNode* temp2 = list2;
        while (temp2->next != nullptr) {
            temp2 = temp2->next;
        }

        aThNode->next = list2;

        temp2->next = bThNode;

        return list1;
    }
};